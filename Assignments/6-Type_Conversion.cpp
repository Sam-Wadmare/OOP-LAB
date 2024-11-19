/*
Author Details: 
  Shital Manoj Patil
  2324001011
  SY B77

Program Details : 
  Sub  : OOP in C++
  Name : Assignment 06 - Type Conversion
*/

/*
Problem: 
    Develop a type conversion program to convert the currency of different countries mentioned below 
    1]India  2]UK  3]USA  4]UAE
    
    Assuming 1 dollar = 84.42inr, 1 pound = 107.02inr, 1 dirham = 22.99inr 

Solution:
    I've did some study and found out that there's 2 ways to do implicit type conversion (implicit = automatically done by the compiler) .i.e
    1] Direct implicit type conversion : 
        Constructor / Operators for direct conversion are given 
        (src -> target) ex(AED -> INR)
    2] Multi-Step implicit type conversion : 
        The compiler checks for direct conversion if not present 
        Then it chooses an intermediate and converts to that and from there converts to target type 
        (src -> inter -> target) ex(AED -> USD -> INR)

        we can put USD as the intermediate so that all other classes 
        only need operator & constructor to convert to USD hence reducing the no. of manually written conversions

    the following program follows the first approach 
    direct approaches are included.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class USA;
class India;
class UAE;
class UK;

class UAE{
    public:
        float aed;
        UAE(float value=100):aed(value){}
        friend ostream & operator <<(ostream &o,UAE e);

};
ostream & operator <<(ostream &o,UAE e){
    o<<e.aed<<endl;
    return o;
}

class India{
    public:
        float inr;
        India(float value=100):inr(value){}

        India(UAE temp){
            inr=temp.aed*22.99;
        }
        operator UAE(){
            UAE temp;
            temp.aed=inr/22.99;
            return temp;
        }
        friend ostream & operator <<(ostream &o,India i);
};
ostream & operator <<(ostream &o,India i){
    o<<i.inr<<endl;
    return o;
}

class USA{
    public:
        float dollar;
        USA(float value=100):dollar(value){}

        USA(India temp){
            dollar=temp.inr/84.42;
        }

        USA(UAE temp){
            dollar=temp.aed*3.67;
        }

        operator India(){
            India temp;
            temp.inr=dollar*84.42;
            return temp;
        }

        operator UAE(){
            UAE temp;
            temp.aed=dollar/3.67;
            return temp;
        }
        friend ostream & operator <<(ostream &o,USA a);
           
};
ostream & operator <<(ostream &o,USA a){
    o<<a.dollar<<endl;
    return o;
}

class UK{
    public:
        float pound;
        UK(float value=100):pound(value){}

        UK(India temp){
            pound=temp.inr/107.02;
            
        }

        UK(USA temp){
            pound=temp.dollar/1.27;
            
        }

        UK(UAE temp){
            pound=temp.aed/4.66;
        }

        operator India(){
            India temp;
            temp.inr=pound*107.02;
            return temp;
        }

        operator USA(){
            USA temp;
            temp.dollar=pound*1.27;
            return temp;
        }

        operator UAE(){
            UAE temp;
            temp.aed=pound*4.66;
            return temp;
        }
        friend ostream & operator <<(ostream &o,UK k);
};
ostream & operator <<(ostream &o,UK k){
    o<<k.pound<<endl;
    return o;
}


int main(){
    India i1;
    USA u1;
    UAE o1;
    UK p1;

    India i2=u1;
    India i3=o1;
    India i4=p1;

    USA u2=i1;
    USA u3=o1;
    USA u4=p1;

    UAE o2=i1;
    UAE o3=u1;
    UAE o4=p1;

    UK p2=i1;
    UK p3=o1;
    UK p4=u1;
    
    cout << fixed << setprecision(2); 
    cout<<"Currency Conversion using TypeConversion:"<<endl;

    cout<<"\n100 INR to :\n";
    cout<<"  USD: "<<u2;
    cout<<"  GBP: "<<p2;
    cout<<"  AED: "<<o2;

    cout<<"\n100 USD to :\n";
    cout<<"  INR: "<<i2;
    cout<<"  GBP: "<<p4;
    cout<<"  AED: "<<o3;

    cout<<"\n100 GBP to :\n";
    cout<<"  INR: "<<i4;
    cout<<"  USD: "<<u4;
    cout<<"  AED: "<<o4;

    cout<<"\n100 AED to : \n";
    cout<<"  INR: "<<i3;
    cout<<"  USD: "<<u3;
    cout<<"  GBP: "<<p3;
    
    return 0;
}
