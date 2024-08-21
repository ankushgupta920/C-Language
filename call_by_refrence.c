#include<stdio.h>
void swap(int *p , int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("\np = %d  q = %d ",*p,*q);
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("\na = %d  b = %d ",a,b);
return 0;
}   