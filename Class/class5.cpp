#include<iostream>
using namespace std;

class Demo{
	public:
		int *val;
		Demo(){
			val=new int;
			*val=1;
		}
	
		Demo * clone(){
			Demo *temp=new Demo;
			temp->val=this->val;
			return temp;
		}

};


int main(){
		
	

	Demo *obj1=new Demo;
	*obj1->val=33;
	Demo *obj2=obj1->clone();
	*obj2->val=44;
	cout<<*obj1->val<<" "<<*obj2->val<<endl;

	

	delete(obj1);
	delete(obj2);	
}






