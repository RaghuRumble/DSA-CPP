#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, size=0;
    cin>>n;
    vector<int> ar(2*n+1);
    for(int i=0;i<2*n+1;i++){
        cin>>ar[i];
        size=max(size,ar[i]);
    }

    vector<int> f(size+1,0);
    for(int i=0;i<2*n+1;i++){
        f[ar[i]]++;
    }
    for(int i=0;i<size+1;i++){
        if(f[i]==1){
            cout<<i;
            break;
        }
    }
}