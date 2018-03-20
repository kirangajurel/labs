#include<iostream>

using namespace std;

class base{
	public:
		base(){
			cout<< "base class constructor"<<endl;
		}
		~base(){
			cout<< "base destructor"<<endl;
		}
};

class derived : public base{
	public:
		derived(){
			cout<<"derived constr"<<endl;
		}
		~derived(){
			cout<< "derived destr"<<endl;
		}
};
int main(){
	derived d;
	return 0;
}
