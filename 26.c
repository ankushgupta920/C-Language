#include<stdio.h>
int main()
{
    int count=0,n,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a Prime number: ",n);
    }
    else
    {
        printf("%d is not a Prime number: ",n);
    }
return 0;
}