#include<iostream>
using namespace std;

template<class T>
class Node{
	public:
		T val;
        Node* next;
		Node(T v) : val(v), next(nullptr) {}
};

template<class T>
class Stack{

	Node<T>* top;

	public:		
		// class OverFlowException{
		// 	public: 
		// 		OverFlowException(){
		// 			cout<<"Stack Full"<<endl;
		// 		}
		// };
		
		class UnderFlowException{
			public:
				UnderFlowException(){
					cout<<"Stack is empty"<<endl;
				}
		};

		Stack():top(nullptr){}

		void push(T val){ //Dont need a OVERFLOW Execption as the Program uses linkedlist hence allowing infinte storage as along as memory is available
            Node<T>* new_node = new Node<T>(val);
            new_node->next = top;
            top = new_node;
		}

		T pop(){
			try
            {
                if(top==nullptr) throw UnderFlowException();
			
                Node<T>* temp = top; 
                T value = top->val; 
                top = top->next;  
                delete temp;  
                return value;
            }
            catch(UnderFlowException e){
                return -1;
            }  
		}

		T peek(){
			try{
                if(top==nullptr) throw UnderFlowException(); 
                return top->val;
            }
            catch(UnderFlowException e){return -1;}
		}
};

int main(){
	
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	// cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	// cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	// cout<<s.peek()<<endl;
	s.pop();
    s.pop();
    s.pop(); // should give Underflow execption as stack top is nullptr bfor this call
    s.push(5);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop(); // should give Underflow execption as stack top is nullptr bfor this call
}
