#include<iostream>
using namespace std;
int main(){
    // constant int
    const int i=10;
    int const i2=10;

    // constant reference from non constant int
    int j=12;
    const int &k=j;
    j++;
    cout<<k<<endl;

    // constant reference from constant int
    int const j2=12;
    int const &k2=j2;

    // reference from constant int
    int const j3=123;
    int const &k3=j3;
    // k3++;
    // ye line not possible
}