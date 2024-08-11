#include<iostream>
using namespace std;
int main(){
    int i=65;
    int*p= &i;
    // typecasted from int to char
    char*pc= (char*)p;

    cout<<p<<endl;
    cout<<pc<<endl;
    cout<<*p<<endl;
    cout<<*pc<<endl;

}