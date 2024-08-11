#include<iostream>
using namespace std;
#include"student.cpp"

int main(){
    student s1(10,1001);
    cout<<"s1 : ";
    s1.display();

    student s2(s1);
    cout<<"s2 : ";
    s2.display();

    student*s3 = new student(20,2001);
    cout<<"s3 : ";
    s3->display();

    student s4(*s3);
    student*s5 = new student(*s3);
    student*s6 = new student(s1);


    //COPY ASSIGNMENT OPERATOR
    student s7(10,1001);
    student s8(20,2001);
    student*s9 = new student(30,3001);

    s8 = s7;
    *s9 = s7;
    s8 = *s9;

    delete s3;
    delete s5;
    delete s6;
    delete s9;

}

