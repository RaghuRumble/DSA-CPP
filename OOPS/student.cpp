class student{

    // making it accessible to all the files
    public:

    int rollnumber;

    // making it accessible within this class only
    private: 

    int age;

    public: 

    //default constructor
    student(){
        cout<< "Constructor called!! " <<endl;
    }

    // parameterized constructor
    student(int r){
        cout<< "Constructor called 2!! " <<endl;
        rollnumber = r;
    }

    student(int a, int r){
        cout<< "Constructor called 3!! " <<endl;
        age = a;
        rollnumber = r;
        cout<<" this: " << this <<endl;
    }

    // default Destructor
    ~student(){
        cout<< "Destructor Called !! "<<endl;
    }

    //public function
    void display(){
        cout<< age <<" "<<rollnumber<<endl;
    }

    int getage(){
        return age;
    }
    int setage(int a){
        age = a;
    }
};