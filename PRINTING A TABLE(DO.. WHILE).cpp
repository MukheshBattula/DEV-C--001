#include<stdio.h>
int main()
{
	int table,n,i=1;
	scanf("%d%d",&table,&n);
	do
	{
		printf("%d*%d=%d\n",table,i,table*i);
		i++;
	}while(i<=n);
}
