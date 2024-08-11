#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int> p;
    p.first=5;
    p.second=6;

    pair<int,int> q(8,9);
    pair<int,int> r={2,3};

    pair<int,int> s=make_pair(100,200);

    cout<<p.first<<" "<<p.second<<endl;
    cout<<q.first<<" "<<q.second<<endl;
    cout<<r.first<<" "<<r.second<<endl;
    cout<<s.first<<" "<<s.second<<endl;

}