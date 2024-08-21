#include<stdio.h>
int main()
{
    int *p,*q,a,b,temp;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping: %d %d",a,b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter swapping: %d %d",*p,*q);
    return 0;
}