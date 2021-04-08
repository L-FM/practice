#include<stdio.h>
int main()
{
	int x,i;
	int boo=1;
	printf("素数判断:请输入一个整数\n");
	scanf("%d",&x); 
	for (i=2;i<x;i++){
		if(x%i==0){
			boo=0; 
			break;
			}
	}
	if(boo==1){
		printf("是素数\n"); 
	}else{
		printf("不是素数\n");
	}
	getch();
	return 0;
}
