// Simple Macro:-
// #include<stdio.h>
// #define money 100
// int main()
// {
//     char name[20]="Ankush";
//     char name2[20]="Rajat";
//     char name3[20]="Hritik";
//     printf("%s got %d Rupees\n",name,money);
//     printf("%s got %d Rupees\n",name2,money);
//     printf("%s got %d Rupees\n",name3,money);
// return 0;
// }


// function Macro:-
#include<stdio.h>
#define money() (100+10)
int main()
{
    char name[20]="Ankush";
    char name2[20]="Rajat";
    char name3[20]="Hritik";
    printf("%s got %d Rupees\n",name,money());
    printf("%s got %d Rupees\n",name2,money());
    printf("%s got %d Rupees\n",name3,money());
return 0;
}