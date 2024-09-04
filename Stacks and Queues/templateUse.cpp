#include<iostream>
using namespace std;
#include "pair.cpp"

int main(){
    // SINGLE DATATYPE
    // pair<int> p1;
    // p1.setX(10);
    // p1.setY(20);

    // cout<<p1.getX()<<" "<<p1.getY()<<endl;

    // pair<double> p2;
    // p2.setX(100.34);
    // p2.setY(34.21);
    // cout<< p2.getX()<<" "<<p2.getY()<<endl;

    // pair<char> p3;
   
    // DOUBLE DATATYPE
    // Pair<int,double> p1;
    // p1.setX(100);
    // p1.setY(100.34);
    // cout<<"X = "<<p1.getX()<<" Y = "<<p1.getY()<<endl;

    //MULTIPLE DATATYPE
    Pair<Pair<int,int>,int> p2;
    p2.setY(10);
    Pair<int,int> p4;
    p4.setX(15);
    p4.setY(16);
    p2.setX(p4);

    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY()<<endl;
}