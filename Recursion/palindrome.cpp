#include<iostream>
using namespace std;
bool isPalindrome(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    if(a[0]!=a[size-1]){
        return false;
    }
    int small=isPalindrome(a+1,size-2);
    return small;
}
int main(){
    int a[]={1,2,3,4,3,2,1};
    int b[]={1,2,3,3,2,1};
    int c[]={1,2,3,4,5,3,2,1};
    cout<< isPalindrome(a,7)<<endl;
    cout<< isPalindrome(b,6)<<endl;
    cout<< isPalindrome(c,8)<<endl;
  
}