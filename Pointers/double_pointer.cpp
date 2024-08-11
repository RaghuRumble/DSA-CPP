#include<iostream>
using namespace std;
int main(){
    int i=10;
    int*p= &i;
    int**p2= &p;

    // address of p
    cout<<p2<<endl;
    cout<<&p<<endl;

    // address of i
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;

    // value of i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;



}