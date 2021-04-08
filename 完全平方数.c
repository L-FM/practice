#include<stdio.h>
#include<math.h>//判断一个数是否是完全平方数且有重复的数字 ex 144 
int IsTheNumber ( const int N );
int main()
{
 	int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;

}
int IsTheNumber ( const int N )
{
	int n =N;
	int q=0,p=0,w=1;
	int g,i,j,k;
	if(n>=10)
	{
		g=sqrt(n);
		if(pow(g,2)==n)
		{
			p=1;
		}
		while(n/10!=0)
		{
			w++;
			n/=10;
		} 
		n=N;
		int a[w];
		for(i=0;i<w;i++)
		{
			a[i]=n%10;
			n/=10;
		}
		for(j=0;j<w-1;j++)
		{
			for(k=j+1;k<w;k++)
			{
				if (a[j]==a[k])
				{
					q=1;
					break;
				}
			}
		}
		
	}
	else return 0; 
	if(p+q==2)
	{
		return 1;
	}else return 0;
}

















