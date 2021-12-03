#include<stdio.h>
int main()
{
	int a,b,c,d,e,percentage,avg,total;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("total marks =%d",total);
    avg=total/5;
    printf("average=%d",avg);
    printf("percentage=%d",avg);
}
