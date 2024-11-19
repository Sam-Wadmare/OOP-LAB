#include<iostream>
using namespace std;

template<class T>
class Stack{
	int top;
	T store[3];
	public:		
		class OverFlowException{
			public: 
				OverFlowException(){
					cout<<"Stack Full"<<endl;
				}
		};
		
		class UnderFlowException{
			public:
				UnderFlowException(){
					cout<<"Stack is empty"<<endl;
				}
		};
		Stack(){
			top=-1;
		}
		void push(T val){
			try{
				if(top==2)
					throw OverFlowException();
			
				top++;
				store[top]=val;
			}
			catch(exception n){}
		}
		T pop(){
			if(top==-1) throw UnderFlowException();
			return store[top--]; 
		}
		T peek(){
			if(top==-1) throw UnderFlowException();
			return store[top];
		}
};

int main(){
	
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	s.pop();
	s.pop();
	Stack<char> cs;
	cs.push('a');
	cs.push('b');
	cs.push('c');
	cout<<cs.peek()<<endl;
	cout<<cs.pop()<<endl;
	cout<<cs.peek()<<endl;
	cout<<cs.pop()<<endl;
	cout<<cs.peek()<<endl;
}
