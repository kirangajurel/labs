#include<iostream>
using namespace std;

class minute;

class degree{
	private:
		int data;
	public:
		degree():data(6){
		}	
	friend int frfunc(degree, minute);
};

class minute{
	private:
		int data;
	public:
		minute():data(40){}
	friend int frfunc(degree, minute);	
};

int frfunc(degree d, minute m){
	return (d.data*60+m.data);
}

int main(){
	degree dd; minute mm;
	cout << frfunc(dd,mm)<<endl;
	return 0;
}
