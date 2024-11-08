#include<iostream>
using namespace std;

class A{
	private:
		int id;	
	protected:
		int policy;
	public:
		A(){
			id=1;
			policy=33;
		}
		int getId(){
			return id;
		}
};


class B:public A{
	public:
		int val;
		void data(){
			cout<<policy<<endl;
		}
};

int main(){
	B bobj;
	bobj.data();
	cout<<bobj.policy<<endl;

}