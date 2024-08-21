#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nx = %d  y = %d ",x,y);
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    printf("\na = %d  b = %d ",a,b);
return 0;
}