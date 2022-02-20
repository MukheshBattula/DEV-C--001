#include<stdio.h>
#include<string.h>

struct student
{
	int roll,ph;
	char name[50];
	char address[50];
}a[5];
int main ()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name");
		scanf("%s",a[i].name);
		printf("enter address");
		scanf("%s",a[i].address);
		printf("enter roll no.");
		scanf("%d",&a[i].roll);
		printf("enter ph no.");
		scanf("%d",&a[i].ph);
	}
}
