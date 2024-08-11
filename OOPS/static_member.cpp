#include<iostream>
using namespace std;
#include "student2.cpp"

int main(){
    student2 s1;

    // cout<<s1.rollnumber<<" "<<s1.age<<endl;
    // cout<<s1.totalstudents<<endl;

    // s1.totalstudents=20;

    student2 s2;
    // cout<<s2.totalstudents<<endl;

    // cout<< student2::totalstudents<<endl;

    student2 s3, s4, s5;

    // WHEN PUBLIC
    // cout<<student2::totalstudents;

    // WHEN PRIVATE
    cout<<student2::getTotalStudents()<<endl;
}