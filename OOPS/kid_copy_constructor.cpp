#include<iostream>
using namespace std;
#include<cstring>
#include "kid.cpp"

int main(){
    char name[]="abcd";
    kid s1(20,name);
    s1.display();

    kid s2(s1);
    s2.name[0]='x';
    s1.display();
    s2.display();
}