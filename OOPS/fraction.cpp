class fraction{
    private:
    int numerator;
    int denominator;

    public:

    fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

    int getnum() const{
        return numerator;
    }

    int getden() const{
        return denominator;
    }

    int setnum(int n){
        numerator=n;
    }

    int setden(int d){
        denominator=d;
    }

    void print() const{
        cout<< this->numerator<<" / "<<denominator<<endl;
    }

    void simplify(){
        int gcd=1;
        int j= min(this->numerator , this->denominator);
        for(int i=1; i<=j; i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }

    // void add(fraction const &f2){
    //     int lcm = denominator * f2.denominator;
    //     int x = numerator * f2.denominator;
    //     int y = denominator * f2.numerator;
    //     int num = x+y;
    //     numerator=num;
    //     denominator=lcm;
    //     simplify();
    // }

    fraction add(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = numerator * f2.denominator;
        int y = denominator * f2.numerator;
        int num = x+y;
        
        fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }

    //OPERATOR OVERLOADING
    fraction operator+(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = numerator * f2.denominator;
        int y = denominator * f2.numerator;
        int num = x+y;

        fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;

    }
    
    fraction operator*(fraction const &f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }            

    // void multiply(fraction const &f2){
    //     numerator = numerator * f2.numerator;
    //     denominator = denominator * f2.denominator;
    //     simplify();
    // }

    bool operator==(fraction const &f2){
        return (numerator==f2.numerator && denominator==f2.denominator);
    }

    //Pre increment

    //WITHOUT &  ++f1 se f1 me changes nhi aare thee but f3=++(++f1) chalra tha
    fraction& operator++(){
        numerator= numerator+denominator;
        simplify();
        return *this; //for returning the data in the object
    }

    // Post increment
    fraction operator++(int){
        fraction fNew(numerator,denominator);
        numerator = numerator+denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }


    fraction& operator+=(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = numerator * f2.denominator;
        int y = denominator * f2.numerator;
        int num = x+y;

        numerator=num;
        denominator=lcm;
        simplify();
        return *this;
        
    }

};