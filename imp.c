//  wap to count number of digits in number:
// #include<stdio.h>
// int main()
// { 
//     int n,i;
//     printf("Enter the number:- "); //1040
//     scanf("%d",&n);
//     for(i=0;n>0;i++) //1040>0(T) i=1  104>0(T) i=2  10>0(T)  i=3  1>0(T) i=4
//     {
//         n=n/10;    //1040/10 == 104   104/10 == 10  10/10=0   1/10=0
//     }
//     printf("count is %d",i);      //i=4
// return 0;
// }

//  wap to find the factorial of a number:
// #include<stdio.h>
// int main()
// {
//     int n,i,f=1;
//     printf("Enter the number:- ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     printf("factorial of %d is %d",n,f);
// return 0;
// }

// wap to reverse a number : n=12345 ans:54321
// #include<stdio.h>
// int main()
// {
//     int i,n,r;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i=1;n>0;i++)
//     {
//         r=n%10;
//         printf("%d",r);
//         n=n/10;
//     }
//     return 0;
// }

// wap of amr:-
// input 153 --> 1*1*1 + 5*5*5 + 3*3*3
#include<stdio.h>
int main()
{
    int i,sum=0,n,c,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    c=n;
    for(i=1;n>0;i++)
    {
        r=n%10;
        sum=r*r*r+sum;
        n=n/10;
    }
    if(c==sum)
    {
        printf("%d is an Amr no. ",c);
    }
    else
    {
        printf("%d is not an Amr no. ",c);
    }
    return 0;
}


// Perfect number = 6---> 1+2+3=6 means:- 1,2,3,4,5 inme se kon kon pura divisible hai 6 se.
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

// Sum of digits of a number: 1+2+3--->6
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",sum);

    return 0;
}


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

