#include<iostream>
using namespace std;
#include "node.cpp"

int main(){

    //STATICALLY
    node n1(1);
    node*head = &n1;

    node n2(2);
    n1.next = &n2;

    cout<< n1.data <<" " << n2.data <<endl;

    //DYNAMICALLY
    node *n3 = new node(10);
    node *n4 = new node(20);
    n3->next = n4;
}