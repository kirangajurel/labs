#include<iostream>
using namespace std;

class pare {
	protected:
		int num ;
	public:
		void read(){
			cout<<"enter number in the base";
			cin>>num;
		}
		void show(){
			cout<< "the number in the base is: "<<num<<endl;
		}
};

class child: public pare {
//	private:
//		int num;
	public:
		void read(){
			cout<<"enter number in the derived";
			cin>>num;
		}
	//	void show(){
	//		cout<< "the number in the derived is: "<<num<<endl;
	//	}
};

int main() {
	child c1;
	c1.read();
	c1.show();
	return 0;
} 
