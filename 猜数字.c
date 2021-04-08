#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//猜数小游戏 
int main ()
{
	srand (time(0));
	int a = rand()%100+1;
	int number;
	int c=0;
	printf("%d",a);
	printf("\n一个0-100的随机数字已经想好了,快来猜吧\n"); 
	printf("\n输入你猜的数字看看对不对\n"); 
	do{
		scanf("%d",&number);
		if(number>a){
			printf("正确答案比这个小,再试试\n"); 
		} else if(number<a){
			printf("正确答案比这个大,再试试\n"); 
		} 
		c+=1;
	}while (a!=number);
	
	printf("    恭喜你终于猜对了 o(^▽^)o\n        总共猜了%d次",c)	;
	getch();

		
	
	return 0;
} 
