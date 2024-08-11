#include<iostream>
using namespace std;
#include"node.cpp"

node* reverseLLRec3(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node*smallAns = reverseLLRec3(head->next);
    node*tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallAns;
}
int main(){

}