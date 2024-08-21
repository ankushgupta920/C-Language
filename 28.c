// Perfect number = 6---> 1+2+3=6
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect no.",n);
    }
    else
    {
        printf("%d is not a Perfect no.",n);
    }

    return 0;
}