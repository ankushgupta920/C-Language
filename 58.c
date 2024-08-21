#include<stdio.h>
int main()
{
    int *p,*q,a,b,sum;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("%d",sum);
    return 0;
}