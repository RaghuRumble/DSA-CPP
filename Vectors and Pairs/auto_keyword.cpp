#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v={3,5,67,8,54};
    vector<string> v={"hello","world"};

    auto it= v.begin();
    cout<<*(it+1);
 }