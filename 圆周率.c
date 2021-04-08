#include<stdio.h>
double Pi(double x);
int main()
{
	double a;
	scanf("%lf",&a);
	printf("%0.6lf",Pi(a));
	return 	0;
}
double Pi(double x)
{
	double up=1,down=1,pi,temp=1;
	int i;
	for(i=1;i<10000;i++)
	{
		up*=i;
		down*=(2*i+1);
		temp+=(up/down);
		pi=2*temp;
		if ((up/down)<x) break;
		
	}
	return pi;
}
