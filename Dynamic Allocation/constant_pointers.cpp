#include<iostream>
using namespace std;

void g(int const &a){
    // a++;
    // ye line kaam nhi karegi kyuki upar humne const declare kr rkha hh
}

void f(const int*p){
    // (*p)++;
    // ye line kaam nhi karegi
}
int main(){
    int const i=10;
    int const*p=&i;

    int j=12;
    int const*p2=&j;
    cout<<*p2<<endl;
    j++;
    cout<<*p2<<endl;

    int*p3=&j;
    f(p3);
    g(j);
}