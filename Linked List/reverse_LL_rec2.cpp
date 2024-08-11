#include<iostream>
using namespace std;
#include"node.cpp"

class Pair{
    public:
    node*head;
    node*tail;
};

Pair revRec2(node*head){
    if(head==NULL || head->next==NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;      
    }
    Pair smallAns = revRec2(head->next);
    smallAns.tail->next = head;
    head->next = NULL;

    Pair ans;
    ans.head = smallAns;
    ans.tail = head;
    return ans;
}

node *revRec2better(node*head){
    return revRec2(head).head;
}