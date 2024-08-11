#include<iostream>
using namespace std;
int sum(int a,int b,int c,int d=0){
    return a+b+c+d;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    // d ko koi value assign nhi krre

    cout<<sum(a,b,c)<<endl;
    cout<<sum(a,b,c,23)<<endl;
}