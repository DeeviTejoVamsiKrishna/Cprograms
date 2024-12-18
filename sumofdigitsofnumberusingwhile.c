#include <stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("Enter n value");
    scanf("%d",&n);
    while(n>0)
    {
        rem=rem%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum is %d",sum);
}
