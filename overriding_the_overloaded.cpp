#include <iostream>
using namespace std;

class employee{
	public:
//		void display(char c){
//			cout<< " char display in the base"<<endl;
//		}
		void display(int i){
			cout << "int display in the base"<<endl;
		}
};
class manager: public employee
{
	public:
		void display(){
			cout<<"argumentless display in the derived ";
		}
};
int main(){
	manager me;
me.display();
//  me.display('a');
	me.display(58);
//	me.employee::display('a');
	me.employee::display(58);
	return 0;
}
