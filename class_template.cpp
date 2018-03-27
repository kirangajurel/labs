#include<iostream>
#include<cstdlib>
using namespace std;


const int MAX=7;
template <class T>
class stack{
	private:
		T arr[MAX];
		int top;
	public:
		stack(){
			top=-1;
		}
		void push (T data){
			arr[++top]=data;
		}
		T pop(){
			return arr[top--];
		}
		int size(){
			return (top+1);
		}
};

int main(){
	cout<<"integer"<<endl;
	stack <int> s1;
	cout<<"size is "<<s1.size()<<endl;
	s1.push(11);
	s1.push(21);
	s1.push(31);s1.push(41);
	cout<<"size is "<<s1.size()<<endl;
	cout<<"number popped is = "<<s1.pop()<<endl;
	cout<<"number popped is = "<<s1.pop()<<endl;
	cout<<"size is "<<s1.size()<<endl;
	s1.push(44);
	cout<<"size is "<<s1.size()<<endl;
	cout<<"number popped is = "<<s1.pop()<<endl;
	cout<<"size is "<<s1.size()<<endl;
	
	cout<<"character stack"<<endl;
	stack <char> s2;
	cout<<"size is "<<s2.size()<<endl;
	s2.push('a');
	s2.push('b');
	s2.push('x');s2.push('z');
	cout<<"size is "<<s2.size()<<endl;
	cout<<"number popped is = "<<s2.pop()<<endl;
	cout<<"number popped is = "<<s2.pop()<<endl;
	cout<<"size is "<<s2.size()<<endl;
	s2.push('S');
	cout<<"size is "<<s2.size()<<endl;
	cout<<"number popped is = "<<s2.pop()<<endl;
	cout<<"size is "<<s2.size()<<endl;
}

