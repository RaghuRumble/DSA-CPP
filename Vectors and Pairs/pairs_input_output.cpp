#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,string>> studentList;

    for(int i=0;i<n;i++){
        int score;
        string name;
        cin>>score>>name;
        studentList.push_back({score,name});
    }
    sort(studentList.begin(),studentList.end());
    for(int i=0;i<n;i++){
        cout<<studentList[i].first<<" "<<studentList[i].second<<endl;
    }
}