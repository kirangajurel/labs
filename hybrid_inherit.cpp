#include <iostream>
using namespace std;

class student {
	private:
		char name[25];
		int studid;
	public:
		void getdata(){
			cout<<"enter name";
			cin>>name;
			cout <<"enter id";
			cin>> studid;
		}
        void show(){
        	cout<<" name :"<<name;
        	cout << " student id :"<<studid;
		}
};		
class exam{
	protected:
	int mark1, mark2, mark3;
	public:
		void getdata(){
			cout<<"enter mark1, mark2 and mark 3";
			cin>>mark1>>mark2>>mark3;
		}
        void show(){
           	cout<<"mark1= "<<mark1<<"mark2= "<<mark2<<"mark 3= "<<mark3<<endl;
		}
};		

class employee:public student{
	private:
		int emid;
	public:
		void getdata(){
			student::getdata();
			cout<<"\n enter the working id";
			cin>>emid;
		}
		void show(){
			
			student::show();
			cout<<" \n working hours "<< emid;
		}
};

class result: public exam,public employee{
	private: int total;
	public:
		void getdata(){
			exam::getdata();
			employee::getdata();
		}
		void show(){
			employee::show();
			exam::show();
			total= mark1+mark2+mark3;
			cout<<"\n the total marks in the result "<< total;
			cout<<"\n percentage ="<<static_cast<float>(total)/3;
		}
};

int main(){
	result r;
	cout<< "enter the data of result processing "<<endl;
	r.getdata();
	cout << "\n data is "<<endl;
	r.show();
	return 0;
}


