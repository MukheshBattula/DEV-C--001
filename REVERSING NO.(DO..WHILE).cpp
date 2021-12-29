#include<stdio.h>
int main()
{
	int d,n,a,r=0;
	scanf("%d",&n);
    a=n;
	do
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}while(n>0);
	printf("%d",r);
  

}

