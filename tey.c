// Wap to input employee id , name, Basic Salary from user and calculate following and then print the output.

// Enter id       :
// Enter Name: 
// Enter salary: 

// // calculate
// Da=3.5% of salary
// Ta=5% of salary
// Hra=12.5 % of  salary
// Pf=15%of salary
// Total salary = salary+da+ta+hra+pf;
// netSalary=totalsalary-pf
// // print the output as below:-

// *******************PaySlip*********************
// Employee id : 1100
// Name            : abc kumar 
// Basic Salary :  50000
// DA : 
// TA: 
// HRA:
// PF:
// TOTAL SALARY : 
// NET SALARY:  

#include<stdio.h>
int main()
{
    int emp_id;
    char ch[50];
    float basic_salary,da,ta,hra,pf,total,net;
    printf("Enter the Employee ID: ");
    scanf("%d",&emp_id);
    printf("Enter your Name: ");
    gets(ch);
    gets(ch);
    printf("Enter the Basic Salary: ");
    scanf("%f",&basic_salary);
    da=basic_salary*3.5/100;
    ta=basic_salary*5/100;
    hra=basic_salary*12.5/100;
    pf=basic_salary*15/100;
    total=basic_salary+da+ta+hra+pf;
    net=total-pf;
    printf("\nEmployee ID: %d",emp_id);
    printf("\nName: %s",ch);
    printf("\nBasic Salary: %f",basic_salary);
    printf("\nDA: %f",da);
    printf("\nTA: %f",ta);
    printf("\nHRA: %f",hra);
    printf("\nPF: %f",pf);
    printf("\nTotal SALARY: %f",total);
    printf("\nNET SALARY: %f",da);
return 0;
}