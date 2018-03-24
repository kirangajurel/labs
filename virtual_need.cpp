#include<iostream>
using namespace std;

class vehicle{
	public:
	void virtual display(){
	cout<<" from base class vehicle";
}	
};

class jeep: public vehicle{
	public:
		void display(){
		cout<<" from base class jeep";
}	
};

class bike: public vehicle{
	public:
		void display(){
		cout<<" from base class bike";
}	
};

int main(){
	vehicle *pvec;
	vehicle vec;
	//car cr;
	jeep jp;
	bike bk;
	
	pvec= &vec;
	pvec->display();
	
//	pvec= &cr;
//	vec->display();
	
	pvec= &jp;
	pvec->display();
	
	pvec= &bk;
	pvec->display();
	
	return 0;
}

