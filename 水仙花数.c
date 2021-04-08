#include <stdio.h>

int main(){
	 
    int i, j, k;
    printf("\n \n 按任意键生成一千以内的水仙花数\n\n \n ");
    getch();
    for (i=0;i<10;i++)
        for(j=0;j<10; j++)
            for(k=1;k<10; k++)
				if(i*i*i + j*j*j + k*k*k == i+10*j+100*k)
					{printf ("%d   ",i+10*j+100*k) ;
					
				} 
				
				
 	getch(); 
 	
 	return 0;
 }
