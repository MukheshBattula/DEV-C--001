#include<stdio.h>
int main()
{
	int c=0,n;
	scanf("%d",&n);
	do
	{
		scanf("%d",&n);
		c++;
	}while(n>0);
     printf ("no. of positives are=%d",c);
}
