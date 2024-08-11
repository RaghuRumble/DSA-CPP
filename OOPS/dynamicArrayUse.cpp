#include<iostream>
using namespace std;
#include "dynamic_array.cpp"

int main(){
    dynamic_array d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    dynamic_array d2(d1);

    dynamic_array d3 = d1;

    d1.add(0,100);

    d2.print();
    d3.print();
    d1.print();
}