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
class employee {
	private:
		char company_name[25];
		int empid;
	public:
		void getdata(){
			cout<<"enter name: or organization :";
			cin>>company_name;
			cout <<"enter empid";
			cin>> empid;
		}
        void show(){
        	cout<<" company name :"<<company_name;
        	cout << " employee id :"<<empid;
		}
};		

class marketing: public student, public employee{
	private:
		int hrs;
	public:
		void getdata(){
			student::getdata();
			employee::getdata();
			cout<<" enter the working hours";
			cin>>hrs;
		}
		void show(){
			student::show();
			employee::show();
			cout<<" \n working hours "<< hrs;
		}
};

int main(){
	marketing mo;
	cout<< "enter the data of marketing officer "<<endl;
	mo.getdata();
	cout << "\n data is "<<endl;
	mo.show();
	return 0;
}


