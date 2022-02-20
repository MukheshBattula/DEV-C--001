#include<stdio.h>
int Sum(int num);
int main()
{
	int num,sum;
	printf("enter a number");
	scanf("%d",&num);
	sum=Sum(num);
	printf("sum of digits of %d:%d",num,sum);
	return 0;	
}
   int Sum(int num)
{
	if(num==0)
	return 0;
	else
	return((num%10)+Sum(num/10));
}
