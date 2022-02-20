#include<stdio.h>
 void func(int);
int main ()
{
	int  n;
	scanf("%d",&n);
	func(n);
	
}
void func(int a)
{
	if(a%2==0)
	 printf("even");
	 else
	 printf("odd");
}
