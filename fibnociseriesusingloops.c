#include <stdio.h>
void main()
{
int n,a=0,b=1,c,i;
printf("enter the n value");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=2;i<n;i++)
{
c=a+b;
printf(" %d",c);
a=b;
b=c;
}
}
