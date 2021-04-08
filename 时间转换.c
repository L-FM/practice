#include<stdio.h>
int main(){
	int utc, bjt;
	scanf("%d",&bjt);
		if (bjt<800) 
			utc=bjt+2400-800;
		else
		utc= bjt-800;
	
	printf("%d",utc);	
		
		
	return 0;
}
