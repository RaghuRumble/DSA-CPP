#include<iostream>
using namespace std;
void merge(int a[],int si,int mid, int ei){
    int l1=mid-si+1;
    int l2=ei-mid;
    int b[l1];
    int c[l2];
    for(int i=0;i<l1;i++){
        b[i]=a[si+i];
    }
    for(int i=0;i<l2;i++){
        b[i]=a[mid+1+i];
    }
    int m=0,n=0,p=si;
    while(m<l1 && n<l2){
        if(b[m]<c[n]){
            a[p]=b[m];
            m++;
        }
        else{
            a[p]=c[n];
            n++;
        }
        p++;
    }
    while(m<l1){
        a[p]=b[m];
        m++;
        p++;
    }
     while(n<l2){
        a[p]=c[n];
        n++;
        p++;
    }
}
void mergeSort(int a[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergeSort(a,si,mid);
    mergeSort(a,mid+1,ei);
    merge(a,si,mid,ei);
}
int main(){
    int a[]={10,9,8,5,6,4,7,2,1,3};
    mergeSort(a,0,9);
    for(int i=0;i<10;i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
}