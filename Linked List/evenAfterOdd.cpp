#include<iostream>
using namespace std;
#include "node.cpp"

node* evenAfterOdd(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* oddH=NULL;
    node* oddT=NULL;
    node* evenH=NULL;
    node* evenT=NULL;
    node* temp=head;
    
    while(temp!=NULL){
        if(temp->data%2!=0){
        if(oddH==NULL){
            oddH = NULL;
            oddT = NULL;
        }
        else{
            oddT->next=temp;
            oddT = oddT->next;
        }
      }
      else{
        if(evenH==NULL){
            evenH = NULL;
            evenT = NULL;
        }
        else{
            evenT->next=temp;
            evenT = evenT->next;
        }
      }
      temp = temp->next;
    }
    oddT->next = NULL;
    evenT->next = NULL;

    oddT->next = evenH;
    
    if(oddH==NULL && oddT==NULL){
        return evenH;
    }
    if(evenH==NULL && event==NULL){
        return oddH;
    }

    return oddH;
    
}