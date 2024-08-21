// Palindrome: 121-->121
// sum variable is only used for to save the result.
#include<stdio.h>
int main()
{
    int n,c,r,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10; // r=1  //r=2 //r=1
        sum=r+(sum*10); //sum=1 //sum=2+(10)=12 //sum=121
        n=n/10; //12 //1
    }
    if(c==sum)
    {
        printf("%d is Palindrome",c);
    }
    else
    {
        printf("%d is not Palindrome",c);
    }
    
    return 0;
}

