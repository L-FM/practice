#include<stdio.h>
int main()
{
	int n,i,king=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++) king=(king+3)%i;
	printf("%d",king+1);
	return 0;
}
