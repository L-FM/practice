#include<stdio.h>
int main()
{
	int step=20;
	float F=0,C=0;
	printf(" ¡æ    ¨H\n");
	while(F <= 300)
	{
		C=5 * (F-32) / 9;
		printf("%3.0f %6.1f\n",F,C);
		
		F=F+step;
	}
}
