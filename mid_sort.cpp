#include<iostream>
using namespace std;

class num{
	public:
	int who; 
	double d;
	//public:
		void get(){
			cout<<" enter a number in whole and decimal parts"<<endl;
			cin>>who>>d;
		}
		void show(){
			cout<<who<<endl;
			cout<<d<<endl;
		}
		
};
void sort(num n[]);
int main(){
	num n[4];
	for(int i=0;i<4;i++){
		n[i].get();
	}
	sort(n);
	for(int i=0;i<4;i++){
		n[i].show();
	}
	return 0;	
}
void sort(num nu[]){
		for(int i=0;i<3;i++){
			for (int j=i+1;j<4;j++){
				if (nu[i].d>nu[j].d){
					num temp= nu[i];
					nu[i]=nu[j];
					nu[j]=temp;
			}
		}
	}
}
