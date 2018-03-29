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
		void display(){
			cout<<"data: "<<data<<endl;
		}
};
template<class T>
class derived2: public base <int>{
	T data;
	public:
		derived2(){
		}
		derived2 (int a, T b):base<int>(a), data(b){
		}
		void display(){
			cout<<"in base";
			base<int>::display();
			cout<<"in derived data: "<<data<<endl;
		}
};
int main(){
	derived2 <float> obj2 (10,12.7);
	obj2.display();
}
