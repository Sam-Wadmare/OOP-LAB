#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex SumCom(complex o1,complex o2);
    public:
    void SetNumber(int n1, int n2) {
        a=n1;
        b=n2;
    }
    void GetNumber() {
        cout<<"Number is : "<<a<<" + "<<b<<"i"<<endl;
    
    }
};
complex SumCom(complex o1, complex o2) {
    complex o3;
    o3.SetNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main() {
    complex c1;
    c1.SetNumber(4,5);

    complex c2;
    c2.SetNumber(4,5);

    complex sum=SumCom(c1,c2);
    sum.GetNumber();
    return 0;
}
