#include<stdio.h>
main()
{
  int amt,a,b,c;
  printf("enter the amount");
  scanf("%d",&amt);
  a=amt/100;
  b=amt/100;
  c=b%10;
  printf(" the answer=%d%d%d",a,b,c);
}
