#include<cstring>
class kid{
    private:
    int age;
   

    public:

     char *name;

    kid(int age, char *name){
        this->age = age;

        // shallow copy
       // this->name = name;

        //deep copy
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    //COPY CONSTRUCTOR
    kid(kid const &s){
        this->age = s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name , s.name);
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};