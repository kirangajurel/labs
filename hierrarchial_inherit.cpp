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
class employee: public student {
	private:
		char company_name[25];
		int empid;
	public:
		void getdata(){
			student::getdata();
			cout<<"enter name: or organization :";
			cin>>company_name;
			cout <<"enter empid";
			cin>> empid;
		}
        void show(){
        	student::show();
        	cout<<" company name :"<<company_name;
        	cout << " employee id :"<<empid;
		}
};		

class marketing:public student{
	private:
		int hrs;
	public:
		void getdata(){
			
			student::getdata();
			cout<<" enter the working hours";
			cin>>hrs;
		}
		void show(){
			
			student::show();
			cout<<" \n working hours "<< hrs;
		}
};
class teacher:public student{
	private:
		int teach_hrs;
	public:
		void getdata(){
			
			student::getdata();
			cout<<" enter the working hours";
			cin>>teach_hrs;
		}
		void show(){
			
			student::show();
			cout<<" \n working hours "<< teach_hrs;
		}
};

int main(){
	marketing mo;
	teacher t;
	employee e;
	cout<< "enter the data of marketing officer "<<endl;
	mo.getdata();
	cout<< "enter the data of employee "<<endl;
	e.getdata();
	cout<< "enter the data of teacher "<<endl;
	t.getdata();
	cout << "\n data mo  "<<endl;
	mo.show();
	cout << "\n data empl  "<<endl;
	e.show();
	cout<< " \n data teacher"<<endl;
	t.show();
	return 0;
}

