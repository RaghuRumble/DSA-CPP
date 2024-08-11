#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    // creating objects statically
    student s1;
    student s2;
    student s3,s4,s5;

    s1.age=24;
    s1.rollnumber=101;

    cout<<s1.age <<endl;    
    cout<<s1.rollnumber <<endl;    

    s2.age=30;

    // creating objects dynamically
    student*s6 = new student;

    (*s6).age=26;
       // OR
    s6 -> age=26;   

    (*s6).rollnumber=103;
    s6 -> rollnumber=103;
}