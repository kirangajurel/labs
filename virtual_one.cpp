#include<iostream>
using namespace std;

class apple{
	public:
		int data;
	apple(){
		cout<<"cons case"<<endl;
		data=55;
	}
	~apple(){
		cout<<"dest"<<endl;
	}
	void show(){
		cout<<"data is " << data <<endl;
	}
};

int main(){
	apple *ptr,*ptr2;
	apple shyau;
	ptr = &shyau; //static object
	ptr2 = new apple;
	cout<<"through shyau"<<endl;	
	shyau.show();
	cout<<"through ptr2"<<endl;
	ptr2 -> show();
	cout<<"through ->"<<endl;
	ptr->show();
	return 0;
}


