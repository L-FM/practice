#include<stdio.h>
int main()
{
	int r,i ;
	scanf("%d",&r);
	for (i=1;i<r+1;i+=2) 
		if (r-i<=1)
			printf("%d",i);
		else
			printf("%d ",i) ;
	
	
	
	return 0;
 } 
