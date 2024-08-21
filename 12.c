#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is a Vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }
return 0;
}   