#include<iostream>
using namespace std;


class Demo{
	public:
		int value;
	
		Demo(int v=1):value(v){
			
			cout<<"default constructor"<<endl;
		}
		
		operator int(){
			return value;
		}
};


int main(){

	Demo d;
	int i=d;
	Demo d1=11;
	int i2=d1;
	cout<<d.value<<" "<<i<<" "<<d1.value<<" "<<d1.value<<endl;
}