#include <stdio.h>
void main()
{
    int n,sum=0,rem,temp;
    printf("Enter n value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
        if(temp==sum)
        {
            printf("the given number is armstrong");
        }
    else
    {
    printf("the given number is not armstrong");
}
}
