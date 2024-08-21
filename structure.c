// #include<stdio.h>
// struct stu
// {
//     int roll;
//     char name[20];
//     float marks;
// };

// int main()
// {
//     struct stu s;
//     printf("Enter student record: ");
//     scanf("%d%s%f",&s.roll,&s.name,&s.marks);
//     printf("%d %s %f",s.roll,s.name,s.marks);
//     return 0;
// }

// c program to store five students record using structure
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
} s[100];
int main()
{
    int i,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter Student Records-\n ");
    for(i=0;i<n;i++)
    {
        printf("Enter sroll: ");
        scanf("%d",&s[i].roll);
        printf("Enter sname: ");
        scanf("%s",&s[i].name);
        printf("Enter smarks: ");
        scanf("%f",&s[i].marks);
    }
    printf("Student Records:\n");
    for(i=0;i<n;i++)
    {
        printf("\nSroll: %d",s[i].roll);
        printf("\nSname: %s",s[i].name);
        printf("\nSmarks: %f",s[i].marks);
        printf("\n");
    }
    return 0;
}