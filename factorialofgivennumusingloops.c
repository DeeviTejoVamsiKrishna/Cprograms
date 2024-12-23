#include <stdio.h>
void main()
{
int n,i;
printf("enter the n value");
scanf("%d",&n);
long int fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial is %d",fact);
}
