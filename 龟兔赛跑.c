#include<stdio.h>
int main()/*  龟兔赛跑  */
{
    int i,T,g,t,n;
    t=g=n=0;
    scanf("%d",&T);
    for(i=0;i<=T;  ){
    	g = 3 *i;
    	t = 9 *(i-n*30);
    	if(i%10==0 && t>g && i!=0)
    	{
    		i+=30;
    		if(i> T){
				g = 3*T;
    			break;
			}
    			
			n++;
		}else{
			i++;
		}
		
	}
	if(t>g)							/*兔子赢*/
	printf("^_^ %d",t);
	else if(t==g)					/*平局*/
	printf("-_- %d",T*3);
	else 							/*乌龟赢*/
	printf("@_@ %d",T*3);
    return 0; 
}









