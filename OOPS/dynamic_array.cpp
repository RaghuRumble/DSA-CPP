class dynamic_array{
    private:
    int*data;
    int nextIndex;
    int capacity;  //total size

    public:
  
    // DEFAULT CONSTRUCTOR
    dynamic_array(){
        data = new int[5];
        nextIndex=0;
        capacity=5;
    }

    // COPY CONSTRUCTOR
    dynamic_array(dynamic_array const &d){
       // this->data = d.data;  SHALLOW COPY

       //DEEP COPY
       this->data = new int[d.capacity];
       for(int i=0; i<d.nextIndex; i++){
        this->data[i] = d.data[i];
       }
       this->nextIndex = d.nextIndex;
       this->capacity = d.capacity;
    }

    // COPY OPERATOR
    void operator=(dynamic_array const &d){
        this->data = new int[d.capacity];
        for(int i=0; i<d.nextIndex; i++){
            this->data[i]= d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void add(int element){
        if(nextIndex==capacity){
            int*newdata = new int[2*capacity];
            for(int i=0; i<capacity; i++){
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = capacity*2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i){
        if(i<nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    void add(int i, int element){
        if(i<nextIndex){
            data[i]=element;
        }
        else if(i==nextIndex){
            add(element);
        }
        else{
            return;
        }
    }

    void print(){
        for(int i=0; i<nextIndex; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};