#include<iostream>
using namespace std;
class two2;
class one1{
    public:
    int items;
    float price;
    one1(int a,float b) {
        items = a;
        price = b;
    }
    void putdata() {
        cout<<"items:"<<items<<" "<<"price:"<<price<<endl;
    }
    int getitems() {
        return items;
    }
    int getprice(){
        return price;
    }
    operator float() {
        return (items*price);
    }
};

class two2{
public:
int codes;
float value;
two2() {
codes=0;
value=0;
}
two2(int x,float y) {
    codes=x;
    value=y;
}
void putdata() {
    cout<<"code : "<<" "<<"value: "<<value<<endl;
}
two2(one1 p) {
    codes=p.getitems();
    value=p.getprice();
}

};

int main() {
        one1 o1(25,100);
        two2 t1;
        t1=o1;
        o1.putdata();
        t1.putdata();


    return 0;
}