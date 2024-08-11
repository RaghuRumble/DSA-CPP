#include<iostream>
using namespace std;

int sum(int*a, int size){
    int ans=0;
    for(int i=0; i<size; i++){
        // ans= ans+ *(a+i);
        ans=ans+a[i];
    }
    return ans;
}

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<sum(a+3,7)<<endl;
}