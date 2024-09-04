#include<climits>
template<typename T>

class StackUsingArrays{
    // int *data;
    T *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArrays(){
        // data = new int[4];
        data = new T[4];
        nextIndex=0;
        capacity=4;
    }

// return the number of elements present in my stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        // if(nextIndex==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        return nextIndex==0;
    }

//insert element
    // void push(int element){
    void push(T element){
        if(nextIndex==capacity){

            // we removed size constraints
            // int *newdata = new int[2*capacity];
            T *newdata = new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            capacity *=2;
            delete[] data;
            data = newdata;

            // cout<<"Stack Full"<<endl;
            // return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

//delete element
    // int pop(){
    T pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // int top(){
    T top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};