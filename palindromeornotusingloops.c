#include <stdio.h>
#include<math.h>
void main()
{
int temp,n,sum=0,rem;
printf("enter the n value");
scanf("%d",&n);
temp=n;
while(n>0)
{
    rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
}
if(temp==sum)
{
    printf("palindrome");
}
else
{
    printf("not a palindrome");
}
}
