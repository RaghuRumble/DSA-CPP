class student2{

    static int totalstudents;

    public: 
    int age;
    int rollnumber;


    student2(){
        totalstudents++;
    }

    int getrollno(){
        return rollnumber;
    }
    
    static int getTotalStudents(){
        return totalstudents;
    }
};

//INITIALIZE STATIC DATA MEMBER
int student2 :: totalstudents = 0;  