#include<iostream>
using namespace std;
#include"node.cpp"

node* revRec(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* smallAns = revRec(head->next);
    node* temp=smallAns;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;
    return smallAns;
}

int main(){

}