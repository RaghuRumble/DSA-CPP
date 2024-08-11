#include<iostream>
using namespace std;
#include<vector>

int main(){

    // saare elements ki value 65 hogyi
   /* vector<int> v(5,65);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    } */

    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<v.size()<<endl;

    // 34 value add hui hh
    // v.push_back(34);

    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();





}