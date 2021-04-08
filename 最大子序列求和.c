#include<stdio.h>
int main()
{
	int n,x,y;
	int maxsum,thesum;
	scanf("%d",&n);
	int a[n];
	for(x=0;x<n;x++)
    {
    	scanf("%d",&a[x]);
	} 
	maxsum=0;
	thesum=0;
	for(y=0;y<n;y++)
    {
    	thesum+=a[y];
    	if (thesum<0)
    	{
    		thesum=0;
		}
		else if(thesum>maxsum)
		{
			maxsum=thesum;
		}
	} 
	printf("%d",maxsum);
	return 0;
}
