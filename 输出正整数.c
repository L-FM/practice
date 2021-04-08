#include<stdio.h>
int N (int N){
    int i;
    for(i=1; i<=N; i++){
        printf("%d\n",i);
    }
    return N;
}

int main(){
	int n;
	scanf("%d",&n);
	N(n);
	
	return 0;
}
