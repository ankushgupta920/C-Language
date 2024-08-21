#include<stdio.h>
int main()
{
    // 0 1 1 2 3 5 8......
    int a=0,b=1,c,n,i;
    printf("Enter number of team: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}