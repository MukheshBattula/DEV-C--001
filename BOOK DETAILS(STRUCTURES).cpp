
 	#include<stdio.h>
#include<string.h>
struct book 
{
	char bAuthor[50];
	char bname[50];
	int npages;
  int cost;
  
  
  struct pdate
  {
  	int date;
  	int mon;
  	int year;

  }book1;
};
int main()
{
	struct book c1;

	printf("Enter name");
	scanf("%s",c1.bname);
	printf("Enter author");
	scanf("%s",c1.bAuthor);
	printf("enter no.of pages");
	scanf("%d",&c1.npages);
	printf("Enter cost");
	scanf("%d",&c1.cost);
	printf("enter published date");
	scanf("%d",&c1.book1.date);
	printf("enter month");
	scanf("%d",&c1.book1.mon);
	scanf("%d",&c1.book1.date);
	printf("%d",&c1.book1.year);
	
	
}
