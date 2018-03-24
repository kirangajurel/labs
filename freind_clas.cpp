#include<iostream>
using namespace std;

class one{
	private:
		int d1;
	public:
		one():d1(15){
		}
		friend class two;
};

class two{
	public:
		void f1(one a){ 
		cout<<"data1= "<<a.d1;}
		void f2(one a){
		cout<<endl<<"data2= "<<a.d1;
		}
};

int main(){
 one a; two b;
 b.f1(a);
 b.f2(a);
 cout<<endl;
 return 0;
}
