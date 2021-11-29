#include<stdio.h>
main()
{
	int a,b,c,d,e,total;
	printf("Enter the no.ofnotes of all notes");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a*10+b*20+c*50+d*100+e*500;
	printf("the amt in piggy bank%d\n",total);
}
