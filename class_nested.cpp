#include <iostream>

using namespace std;

class one{
	int m;
	 public:
	 	class two{
	 		int n;
	 		public:
	 			void get(){
	 				cout<<"enter n in two :";
	 				cin>>n;
				 }
				void show(){
					cout<<"\n n is :"<< n <<endl;
				}
//		void get(){
//			cout<<"enter m in one  :";
//	 				cin>>m;
//		}
//		void show(){
//					cout<<"\n m is :"<< m <<endl;
//		 }
	};
};

int main(){
	one::two t;
	t.get();
	t.show();
	return 0;
}
