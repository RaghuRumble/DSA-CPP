#include<iostream>
using namespace std;
#include "kid.cpp"
#include<cstring>

int main(){
    char name[]="abcd";
    kid s1(20,name);
    s1.display();

    name[3]='e';
    kid s2(24,name);
    s2.display();

    s1.display();
}