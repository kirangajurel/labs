#include<iostream>
using namespace std;
int show(int);
void show(int,int);
void show(int,int,int);
int main(){
	int a,b,c;
	a=10;b=20;c=30;
	cout<<"single function is envoked"<<show(a)<<endl;
	cout<<endl<<"double function is envoked"<<endl;show(b,c);
	cout<<endl<<"triple function is envoked"<<endl;show(a,b,c);
	//cout<<"character function is envoked"<<endl<<show;
return 0;
}
int show(int a){
	cout<<"1	"<<a;
	return a;
}
void show(int num, int nu){
	cout<<"2 	"<<num+nu;
}
void show(int a,int b,int c){
	cout<<"3	"<<a+b+c;
}
