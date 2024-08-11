#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int ar[5]={56,2,4,36,85};

    // fill(ar+2,ar+4,10);

    // Range [L,R) hoti hh
    // sort(ar,ar+3);

    // sort(ar,ar+5);
    // reverse(ar,ar+5);

    // swap(ar[0],ar[2]);

    // for(int i=0;i<5;i++){
    //     cout<<ar[i]<<" ";
    // }

    // size of an array
    int n=sizeof(ar)/sizeof(ar[0]);
    cout<<n;
}