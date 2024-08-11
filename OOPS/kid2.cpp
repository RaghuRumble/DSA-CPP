class kid2{
    public:
    int age;
    const int rollno;
    int &x;  // age reference variable

    kid2(int r, int a) : rollno(r), age(a), x(age){

    }
};