#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int> num(5);
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    vector<int> :: iterator i= num.begin();
    for(; i!=num.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

//   specific value of that element
    cout<<num.at(2)<<endl;

// check whether vector is empty
    cout<<num.empty()<<endl;

// first and last element of vector
    cout<<num.front()<<" "<<num.back()<<endl;

    // sorting in decreasing order
    sort(num.begin(),num.end(),greater<int>());

    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }

}