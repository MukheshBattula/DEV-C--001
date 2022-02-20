#include<stdio.h>
int main()
{
	int v=20;
	int *ip;
	
	ip=&v;
	printf("Address of v %x\n",&v);
	printf("Adress stored in *ip %x\n",&*ip);
	
	/*access the value using pointer*/
	printf("Value of *ip variable is %d\n",*ip);
	
return 0;
}
