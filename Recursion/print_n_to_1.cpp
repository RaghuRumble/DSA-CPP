#include<iostream>
using namespace std;
void printnto1(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    printnto1(n-1);
}
int main(){
    int n;
    cin>>n;
    printnto1(n);
}