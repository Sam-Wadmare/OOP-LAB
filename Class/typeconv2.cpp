#include<iostream>
using namespace std;

class USA;
class India;

class India{
	public:
		int inr;
		India(int value=100):inr(value){}
};

class USA{
	public:
		int dollar;
		USA(int value=100):dollar(value){}

		operator India(){
			India temp;
			temp.inr=dollar*80;
			return temp;
			
		}
};

int main(){
	India i1;
	USA u1;

	India i2=u1;
	USA u2=i1;
}