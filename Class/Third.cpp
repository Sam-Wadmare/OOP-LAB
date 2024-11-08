#include<iostream>
using namespace std;

class Third{
	public:
		int i;
		int *val;
		Third(){
			i=1;
			val=new int;
			*val=2;
			cout<<"constructor"<<endl;
		}
		Third(Third &o){
			cout<<"Copy Constructor"<<endl;
		}
};

int main(){
	Third obj1;
	Third obj2=obj1	;
	obj2.i=22;
	*obj2.val=333;	
	cout<<obj1.i<<" "<<obj2.i<<endl;
	cout<<*obj1.val<<" "<<*obj2.val<<endl;

	return 0;
}