#include<stdio.h> 
#define N 15 
long s[N]={1};
long n=10000;
long t=2;
long a,b,m;
int main()
{
	
	for( ; a<=m||++t<=N&&(a=b=0,1); m==a++&&b&&m++)
		s[a]=(b+=s[a]*t)% n, b/=n;
		for(printf("%d",s[m]);m--;)
		{
			printf("%04d",s[m]);
		}
}
/*

    t = 1; // 以便第一次通过外层循环
    while ( ++t  <= n )
    {     
        b = 0, a =1;
        while (a  <= s[0])
        { 
            b += s[a] * t; 
            s[a] = b %10000;
            b /= 10000 ;
            if (s[0] == a++ && b > 0)
                s[0]++;
        }
    }





*/

