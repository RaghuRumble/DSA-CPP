#include<iostream>
using namespace std;
#include "node.cpp"

// node* takeInput(){
//     int data;
//     cin>>data;
//     node *head = NULL;
//     while(data != -1){
//         node *newnode = new node(data);
//         if(head == NULL){
//             head = newnode;
//         }
//         else{
//             node *temp = head;
//             while(temp->next != NULL){
//                 temp = temp->next;
//             }
//             temp->next = newnode;
//         }
//         cin>>data;
//     }
//     return head;
// }

node *takeInputBetter(){
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
            // OR tail = newnode;
        }
        cin>>data;
    }
    return head;
}

void print(node *head){
    while(head != NULL){
        cout<< head->data <<" ";
        head = head->next;
    }
}

int main(){
    node *head = takeInputBetter();
    print(head);
}