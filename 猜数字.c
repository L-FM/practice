#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
//����С��Ϸ 
int main ()
{
	srand (time(0));
	int a = rand()%100+1;
	int number;
	int c=0;
	printf("%d",a);
	printf("\nһ��0-100����������Ѿ������,�����°�\n"); 
	printf("\n������µ����ֿ����Բ���\n"); 
	do{
		scanf("%d",&number);
		if(number>a){
			printf("��ȷ�𰸱����С,������\n"); 
		} else if(number<a){
			printf("��ȷ�𰸱������,������\n"); 
		} 
		c+=1;
	}while (a!=number);
	
	printf("    ��ϲ�����ڲ¶��� o(^��^)o\n        �ܹ�����%d��",c)	;
	getch();

		
	
	return 0;
} 
