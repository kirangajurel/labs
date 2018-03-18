//increment counter variable with ++

#include<iostream>
using namespace std;

class Counter{
	private:
		 int count;
	public: 
	Counter():count(0)
	{}
	 int get_count(){
		return count;
	}
	void operator ++(int){
		--count;
	}	
};
int main(){
	Counter c1,c2;
	cout<<"\n c1="<<c1.get_count();
	cout<<"\n c2="<<c2.get_count();
	c1++;
	c2++;
	c2++;
	cout<<"\n c1="<<c1.get_count();
	cout<<"\n c2="<<c2.get_count();
return 0;
}
