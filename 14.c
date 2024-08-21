#include<stdio.h>
int main()
{
    int a,b,ch,c;
    printf("Enter User Choice: ");
    scanf("%d",&ch);
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    if(ch==1)
    {
        c=a+b;
        printf("Addition: %d",c);
    }
    else if(ch==2)
    {
        c=a-b;
        printf("Subtraction: %d",c);
    }
    else if(ch==3)
    {
        c=a*b;
        printf("Multiplication: %d",c);
    }
    else if(ch==4)
    {
        c=a/b;
        printf("Division: %d",c);
    }
    else if(ch==5)
    {
        c=a%b;
        printf("Reminder: %d",c);
    }
    else
    {
        printf("Invalid");
    }
return 0;
}   