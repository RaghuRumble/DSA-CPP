#include<iostream>
using namespace std;
#include "node.cpp"

node*skipMdeleteN(node*head, int m, int n){
    if(head==NULL){
        return head;
    }
    node*temp1 = head;
    int c1=1;
    int c2=1;

   while(temp1!=NULL || temp2!=NULL){
      c1=1;
      c2=1;
        while(c1!=m){
        temp1 = temp1->next;
        c1++;
    }
    node*temp2 = temp1->next;
    while(c2!=n){
        temp2 = temp2->next;
        c2++;
    }
    temp2 = temp2->next;
    temp1->next = temp2;
  }

  if(temp2==NULL){
    return temp1;
  }

    
}