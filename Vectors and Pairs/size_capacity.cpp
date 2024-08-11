#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;

    v.push_back(-1);
    cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;

    for(int i=0;i<4;i++){
        v.push_back(i);
    }
     cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;

     v.push_back(-1);
     cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;



}