#include<stdio.h>
int main()
{
	int x,i;
	int boo=1;
	printf("�����ж�:������һ������\n");
	scanf("%d",&x); 
	for (i=2;i<x;i++){
		if(x%i==0){
			boo=0; 
			break;
			}
	}
	if(boo==1){
		printf("������\n"); 
	}else{
		printf("��������\n");
	}
	getch();
	return 0;
}
