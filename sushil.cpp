#include<stdio.h>
#include<math.h>
float F(float x)
{
	return x*x*x-x-1;
}
int main()
{
	float a,b,c,d;
	int flag=0;
	printf("Enter two intial guess:\n");
	printf("a:");
	scanf("%f",&a);
	printf("b:");
	scanf("%f",&b);
	printf("Enter tolerance value d:");
	scanf("%f",&d);
	do{
		c=b-(((b-a)*F(b)/(F(b)-F(a))));
		if(fabs(b-c)<d)
		{
			flag=1;
		}
		else
		{
			a=b;
			b=c;
		}
		while(flag==0);
		printf("The root is:%f",c);
		return 0;
	}
	
