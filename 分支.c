#include<stdio.h>
int main()
{
	int type;
	scanf("%d",&type);
	switch (type){
		case(1):
		printf("你好");
		break; 
		case(2):
		printf("早上好");
		break; 
		case(3):
		printf("中午好");
		break; 
		case(4):
		printf("晚上好");
		break; 
		default:
		printf("啊啊啊啊啊再见") ; 
	}
	
	
}
