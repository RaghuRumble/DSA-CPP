#include<iostream>
using namespace std;
#include "node.cpp"

node *takingInput(){
    int data;
    cin>>data;
    node *head = NULL;
    node *tail = NULL;
    while(data != -1){
        node *newnode = new node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node *insertNode(node *head, int i, int data){
    node *newnode = new node(data);
    int count=0;
    node *temp = head;
    if(i==0){
        newnode->next=head;
        head = newnode;
        return head;
    }
    while(temp != NULL && i-1 < count){
        count++;
        temp = temp->next;
    }
    if(temp!=NULL){
        node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}

int main(){
    node *head = takingInput();
    print(head);
    int i,data;
    cin>>i>>data;
    head = insertNode(head,i,data);
    print(head);
}