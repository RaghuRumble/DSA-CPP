#include<iostream>
using namespace std;

bool is_sorted(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool isSmallerSorted=is_sorted(a+1,size-1);
    return isSmallerSorted;
}

int main(){
    int arr[5]={23,45,67,89,54};
    cout<< is_sorted(arr,5);
}