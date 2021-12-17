#include<stdio.h>
int main()
{
	int u,amt,sc,tamt,eb;
	printf("units");
	scanf("%d",&u);
	if(u<=50)
	{
	amt=u*1;
	}
	else if(u<=100)
	{
		amt=(u-50)*2+50*1;
	}
	else if(u<=200)
	{
		amt=(u-100)*3+50*1+50*2;
	}
	else if (u<=350)
	{
		amt=(u-200)*4+50*1+50*2+100*3;
	}
	else
	{
		amt=(u-350)*6+50*1+50*2+100*3;
	}
	sc=amt*10/100;
	tamt=amt+sc;
	eb=tamt;
	printf("elec bill=%d",eb);
}
