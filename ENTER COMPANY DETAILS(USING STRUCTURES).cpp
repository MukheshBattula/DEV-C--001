#include<stdio.h>
#include<string.h>
struct company 
{
	char address[50];
	char name[50];
	int ph;
  int employees;
};
int main()
{
	struct company c1;

	printf("Enter name");
	scanf("%s",c1.name);
	printf("Enter address");
	scanf("%s",c1.address);
	printf("enter phone number");
	scanf("%d",&c1.ph);
	printf("Enter no.of employees");
	scanf("%d",&c1.employees);
}
