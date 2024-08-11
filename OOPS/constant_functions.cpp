#include<iostream>
using namespace std;
#include "fraction.cpp"

int main(){
    fraction f1(10,2);
    fraction f2(15,4);

    fraction const f3;

    cout<<f3.getnum()<<" "<<f3.getden()<<endl;
    f3.setnum(10);
}