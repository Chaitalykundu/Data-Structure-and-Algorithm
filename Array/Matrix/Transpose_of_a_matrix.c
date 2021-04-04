
/* Author : Chaitaly Kundu
   Date: 04-04-2021 */

/* WAP to transpose a matrix  */
#include<stdio.h>

int main()
{
    int m=4,n=3;
    int a[m][n], b[m][n];
    int i,j,k;

    /* printf("Enter the number of row and column: ");
    scanf("%d %d\n",&m,&n); */

    // Elements of a[m][n]
    printf("Enter the elements of a[%d][%d]: ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    // print the elements
    printf("a[%d][%d]",m,n);

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }


    // print transposed matrix

    printf("\nTransposed Matrix: \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }
    }


    return 0;
}
