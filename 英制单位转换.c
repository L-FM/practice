#include<stdio.h>
int main(){
	int cm,foot,inch;
	float m;
	scanf("%d",&cm);
	m=cm/30.48  ;
	foot=(int)m;
	inch= 12*(m-foot);
	printf("%d %d",foot, inch);
	return 0;
	
}
