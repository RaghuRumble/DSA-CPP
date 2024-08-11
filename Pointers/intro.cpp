#include<iostream>
using namespace std;
int main(){
    int i;
    cout<< &i <<endl;
    
    int*p = &i;
    cout<< p <<endl;


    i=10;
    cout<< i <<endl;
    cout<< *p <<endl;

    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    (*p)++;
    cout<<i<<endl;
}