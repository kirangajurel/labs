#include <iostream>
using namespace std;

class Distance{
	private:
		int feet;float inch;
	public:
		Distance():feet(0),inch(0){
		}
		Distance(float fltfeet){
			feet = int(fltfeet);
			inch=12*(fltfeet-feet);
		}
		Distance (int ft, float in){
			feet=ft;inch=in;
		}
		void show(){
			cout<<feet<<"\'-"<<inch<<"in"<<endl;
		}
		friend Distance operator + (Distance, Distance);
};

Distance operator + (Distance d1, Distance d2){
	int f=d1.feet+d2.feet;
	float i= d1.inch+d2.inch;
	if (i>=12.0){
		i-=12.0;f++;
	}
	return Distance(f,i);
}

int main(){
	Distance d1=2.5;
	Distance d2=1.25;
	Distance d3;
	cout<<"d1= ";d1.show();
	cout<<"d2= ";d2.show();
	
	d3=10.5+d1;
	cout<<"first add float + dist= "; d3.show();
	d3=d2+10;
	cout<<"first add dist + float = "; d3.show();
	return 0;
}   
