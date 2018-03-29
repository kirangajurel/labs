#include<iostream>
using namespace std;

template<class T>
class base{
	private: T data;
	public:
		base(){
		}
		base(T a){
			data=a;
		}
		void display();
};
template <class T>
void base<T>::display(){
			cout<<"data: "<<data<<endl;
		}
class derived1: public base <int>{//not a class template
	public:
		derived1(){
		}
		derived1 (int a):base<int>(a){
		}
};
int main(){
	derived1 obj (5);
	obj.display();
}
