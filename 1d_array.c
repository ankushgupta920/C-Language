// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("Enter the array elements: ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n Array elements: ");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// In Reverse order
// #include<stdio.h>
// int main()
// {
//     int a[5],i;
//     printf("Enter the array elements: ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n Array elements: ");
//     for(i=4;i>=0;i--)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// c program to insert element at any position of array
#include<stdio.h>
int main()
{
    int a[100],i,size,pos,item;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0;i<size;i++) 
    {
        scanf("%d",&a[i]); // 10 20 30 40 50
    }
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the item: ");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)  // i=5;5>=3;i-- 
    {
        a[i]=a[i-1];    // a[5]=a[4]
    }
    a[pos]=item;
    size++;
    printf("Resultantr arrry is :- ");
    for(i=0;i<size;i++) 
    {
        printf("%d ",a[i]); 
    }
    return 0;
}

// c program to insert element at any begining of array:-
// #include<stdio.h>
// int main()
// {
//     int a[100],i,size,item;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     printf("Enter the array elements: ");
//     for(i=0;i<size;i++) 
//     {
//         scanf("%d",&a[i]); 
//     }
//     printf("Enter the item: ");
//     scanf("%d",&item);
//     for(i=size;i>0;i--) 
//     {
//         a[i]=a[i-1];    
//     }
//     a[0]=item;
//     size++;
//     printf("Resultantr arrry is :- ");
//     for(i=0;i<size;i++) 
//     {
//         printf("%d ",a[i]); 
//     }
//     return 0;
// }

// c program to copy one array elements to another:-
// #include<stdio.h>
// int main()
// {
//     int a1[100],a2[100],size,i;
//     printf("Enter the size of array :- ");
//     scanf("%d",&size);
//     printf("Enter the array elements: -");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a1[i]);
//     }
//     printf("\nPrint first array elements: -");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",a1[i]);
//     }
//     // copying the 1st array elements to second array elements:-
//     for(i=0;i<size;i++)
//     {
//         a2[i]=a1[i];
//     }
//     printf("\nSecound array elements is:-");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",a2[i]);
//     }
//     return 0;
// }


// C Program to Calculate Sum of Array Elements:-
// #include<stdio.h>
// int main()
// {
//     int a[5],sum=0,i;
//     printf("Enter the Array elements: ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Sum of Array elements: ");
//     for(i=0;i<5;i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("%d",sum);
//     return 0;
// }


// // find the max:-
// #include<stdio.h>
// int main()
// {
//     int size,a[100],i,max;
//     printf("Enter the size of Array: ");
//     scanf("%d",&size);
//     printf("Enter the Array Elements: ");  
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     } 
//     max=a[0];
//     for(i=0;i<size;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     printf("Max: %d",max);
//     return 0;
// }

// find the min:-
// #include<stdio.h>
// int main()
// {
//     int size,a[100],i,min;
//     printf("Enter the size of Array: ");
//     scanf("%d",&size);
//     printf("Enter the Array Elements: ");  
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     } 
//     min=a[0];
//     for(i=0;i<size;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     printf("Min: %d",min);
//     return 0;
// }


// Ascending :-
// #include<stdio.h>
// int main()
// {
//     int i,a[5],j,temp;
//     printf("Enter the Array elements: ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]); // 2 1 5 3 4
//     }
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("ARRAY ELEMENTS ARE:-");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);  
//     }   
//     return 0;
// }


// decending order:-
// #include<stdio.h>
// int main()
// {
//     int i,a[5],j,temp;
//     printf("Enter the Array elements: ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]); // 2 1 5 3 4
//     }
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(a[i]<a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("ARRAY ELEMENTS ARE:-");
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);  
//     }   
//     return 0;
// }

// Linear Searching:-
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a[100],i,size,item;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     printf("Enter the array elements: ");
//     for(i=0;i<size;i++) 
//     {
//         scanf("%d",&a[i]); 
//     }
//     printf("Enter the item: ");
//     scanf("%d",&item);
//     for(i=0;i<size;i++)
//     {
//         if(a[i]==item)
//         {
//             printf("Item found at %d",i);
//             exit(0);
//         }
//     }
//     if(i>=size)
//     {
//         printf("Item not found ");
//         exit(0);
//     }
//     return 0;
// }
