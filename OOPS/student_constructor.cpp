#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    student s1;
    s1.display();

    student s2;

    student*s3 = new student;
    s3 -> display();

    cout<< "Parameterized Constructur Demo" <<endl;

    student s4(102);
    s4.display();

    student s5(10,105);
    cout<<"address of s5: " << &s5 <<endl;
    s5.display();
}