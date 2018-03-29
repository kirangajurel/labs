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
template<class T1, class G1>
class derived3: public base <T1>{//not a class template
	G1 data;
	public:
		derived3(){
		}
		derived3 (T1 a, G1 b):base<T1>(a), data(b){
		}
		void display(){
			cout<<"in base";
			base<T1>::display();
			cout<<"in derived data: "<<data<<endl;
		}
};
int main(){
	derived3<int,float> obj2 (10,12.7);
	obj2.display();
}
