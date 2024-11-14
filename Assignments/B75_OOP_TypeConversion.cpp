#include<iostream>
using namespace std;
//Prathamesh Manoj kodole B75
/*Assuming for simplicity 1 dollar =80inr, 1 pound =90inr, 1 dirham =23inr */
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
            inr=temp.aed*23;
        }
        operator UAE(){
            UAE temp;
            temp.aed=inr/23;
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
            dollar=temp.inr/80;
        }

        USA(UAE temp){
            dollar=temp.aed*3.478;
        }

        operator India(){
            India temp;
            temp.inr=dollar*80;
            return temp;
        }

        operator UAE(){
            UAE temp;
            temp.aed=dollar/3.478;
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
            pound=temp.inr/90;
            
        }

        UK(USA temp){
            pound=temp.dollar/1.125;
            
        }

        UK(UAE temp){
            pound=temp.aed/3.913;
        }

        operator India(){
            India temp;
            temp.inr=pound*90;
            return temp;
        }

        operator USA(){
            USA temp;
            temp.dollar=pound*1.125;
            return temp;
        }

        operator UAE(){
            UAE temp;
            temp.aed=pound*3.913;
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
    UK p4 =u1;

    cout<<"\n\n\t\tCurrency Convertor with help of Typecoversion by B75 PMK\n\n";

    cout<<"\n\nIndian to other currencies\n\n";
    cout<<"100 Indian to Dollar:\t"<<u2;
    cout<<"100 Indian to Pound:\t"<<p2;
    cout<<"100 Indian to Dirham:\t"<<o2;

    cout<<"\n\nDollar to other currencies\n\n";
    cout<<"100 Dollar to Indian:\t"<<i2;
    cout<<"100 Dollar to Pound:\t"<<p4;
    cout<<"100 Dollar to Dirham:\t"<<o3;

    cout<<"\n\nPound to other currencies\n\n";
    cout<<"100 Pound to Indian:\t"<<i4;
    cout<<"100 Pound to Dollar:\t"<<u4;
    cout<<"100 Pound to Dirham:\t"<<o4;

    cout<<"\n\nDirham to other currencies\n\n";
    cout<<"100 Dirham to Indian:\t"<<i3;
    cout<<"100 Dirham to Dollar:\t"<<u3;
    cout<<"100 Dirham to Pound:\t"<<p3;
    
    return 0;
}