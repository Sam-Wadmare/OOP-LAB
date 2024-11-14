#include<iostream>
using namespace std;

class india{
public:
    int inr;
    india(int value=100):inr(value) {}
};

class uk{
 	public:
 	int pounds;
 	uk(int value = 100):pounds(value) {}
 	
 };

class usa{
public:
    int doller;
        usa(int value = 200):doller(value) {}

    usa (india temp) {
        doller = temp.inr/90;
    }

    usa (uk temp) {
        doller = temp.pounds/0.77;
    }
    operator india() {
	    india temp;
	    temp.inr=doller*90;
	    return temp;
	    
	}
	operator uk() {
 		uk temp;
 		temp.pounds=doller*0.77;
 		return temp;
 	}

};

int main() {

india rup1;
usa dol1;
uk pond1;


india rup2=dol1;
usa dol2=rup1;
usa dol3=pond1;


cout<<rup1.inr<<" Ruppes"<<endl;
cout<<dol1.doller<<" dollers"<<endl;
cout<<"Doller to inr is : "<<rup2.inr<<endl;
cout<<"inr to Doller is : "<<dol2.doller<<endl;
cout<<"pund to Doller is : "<<dol3.doller<<endl;




return 0;
}
