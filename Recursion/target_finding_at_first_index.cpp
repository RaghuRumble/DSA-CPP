#include<iostream>
using namespace std;
int firstIndex(int a[],int size,int x){
    if(size==0){
       return -1; 
    }
    if(a[0]==x){
        return 0;
    }
    int smallArrayFirstIndex=firstIndex(a+1,size-1,x);
    if(smallArrayFirstIndex==-1){
        return -1;
    }else{
        return smallArrayFirstIndex+1;
    }
}
int main(){
    int a[]={3,2,1,4,5,6};
    cout<< firstIndex(a,6,4)<<endl;
    cout<< firstIndex(a,6,9)<<endl;
    cout<< firstIndex(a,6,3);

}