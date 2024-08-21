#include<stdio.h>
int main()
{
    int n1,n2,sum=0,i;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
return 0;
}