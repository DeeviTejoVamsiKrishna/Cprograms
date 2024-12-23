#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    printf("%d",i);
}
printf("\n");
for(j=n;j>=0;--j){
printf("%d",j);
}
}
