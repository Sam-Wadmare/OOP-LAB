#include<iostream>
using namespace std;

class Demo{
	public:
		int i;
		static int k;
		class Val{
			public:
				void dispVal(){
					cout<<"This is dispVal method"<<endl;
				}
		};
};

int Demo::k=0;

int main(){
	Demo obj;
	obj.i=1;
	cout<<obj.i<<endl;

	Demo::Val vobj;
	vobj.dispVal();
}