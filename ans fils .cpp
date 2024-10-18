Sam's code 


class Person{
    protected: 
    string name;
    int age;
    
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor : public Person {
    private:
        int publications;
        int cur_id;
        static int pfr_cnt;
    
    public:
        Professor() {
            cur_id = ++pfr_cnt;
        }
        
        void getdata() override {
            cin >> name >> age >> publications;
        }
        void putdata() override {
            cout << name << " "<< age << " "  << publications << " " << cur_id << endl;
        }
};


class Student : public Person {
    private:
        int marks[6];
        int cur_id;
        static int std_cnt;
    
    public:
        Student() {
            cur_id = ++std_cnt;
        }
        
        void getdata() override {
            cin >> name >> age ;
            for (int i = 0; i < 6;i++){
                cin >> marks[i]; 
            }
        }
        void putdata() override {
            int sum=0;
            for (int i = 0 ; i < 6;i++){
                sum += marks[i];
            }
            cout << name << " "<< age << " "  << sum << " " << cur_id << endl;
        }
};
int Professor::pfr_cnt = 0; 
int Student::std_cnt = 0; 
                                          



inherited code soln




/*

class BadLengthException : public exception {
    private:
        int n;
    public:
        BadLengthException(int n1){
           n = n1;
        }
        
        int what(){
            return x;
        }
};


