#include<stdio.h>
int main()
{
    int mat[2][2],i,j;
    printf("Enter Matrix Elements: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// c program to swap two matrices using 2D array :-
// #include<stdio.h>
// int main()
// {
//     int mat1[2][2],mat2[2][2],i,j,temp[2][2];
//     printf("Enter first Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("Enter secound Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     printf("\nBefore swapping: ");
//     printf("\nfirst Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSecound Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat2[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             temp[i][j]=mat1[i][j];
//             mat1[i][j]=mat2[i][j];
//             mat2[i][j]=temp[i][j];
//         }
//     }
//     printf("\nAfter swapping: ");
//     printf("\nfirst Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSecound Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat2[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Transpose of matrix:-
// #include<stdio.h>
// int main()
// {
//     int mat[2][2],i,j,trans[2][2];
//     printf("Enter Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Matrix is:\n ");

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",mat[i][j]);
//         }
//         printf("\n");
//     }

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             trans[j][i]=mat[i][j];
//         }
//     }

//     printf("Transpose Matrix :\n ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d",trans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Sum of two matrix:-
// #include<stdio.h>
// int main()
// {
//     int mat1[2][2],mat2[2][2],i,j, temp[2][2];
//     printf("Enter first Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("Enter secound Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     printf("\nfirst Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d ",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nSecound Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d ",mat2[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             temp[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
//     printf("\nSum Matrix Elements: ");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("%d ",temp[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }