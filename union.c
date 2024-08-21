#include<stdio.h>
union stu
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    union stu s;
    printf("\nEnter student Roll no. : ");
    scanf("%d",&s.roll);
    printf("%d",s.roll);
    printf("\nEnter student Name : ");
    scanf("%s",&s.name);
    printf("%s",s.name);
    printf("\nEnter student Marks : ");
    scanf("%f",&s.marks);
    printf("%f",s.marks);
    return 0;
}