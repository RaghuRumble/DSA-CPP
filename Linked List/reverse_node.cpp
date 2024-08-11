#include<iostream>
using namespace std;
#include "node.cpp"

node* reverseNode(node* head){
    if(head==NULL){
        return head;
    }
    node*curr = head;
    node*prev = NULL;
    node*nx = head->next;

    while(nx!=NULL){
        curr->next = prev;
        prev = curr;
        curr = nx;
        nx = curr->nx;
    }
    curr->next = prev;
    return curr;
}

int main(){

}