#include <stdio.h>
int main(){
	int a,i,j,k ,sum ;
	printf("������һ����λ��:\n"); 
	scanf("%d",&a);
	i=  a/100;
	j=  (a%100)/10;
	k=a%10;
	sum=100*k+10*j+i;
	printf ("%03d",sum) ;
return 0;
}
