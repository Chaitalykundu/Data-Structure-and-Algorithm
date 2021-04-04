/* Author : Chaitaly Kundu
   Date: 01-04-2021 */

/* WAP to multiply 2 matrix  */
#include<stdio.h>

int main()
{
    int m=3,n=3;
    int a[m][n], b[m][n], c[m][n];
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

    // Elements of b[m][n]
    printf("Enter the elements of b[%d][%d]: ",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nb[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }


    // print the elements of a[m][n], b[m][n] , c[m][n]
    printf("\n\ta[m][n] \t\t\t\tb[m][n]\n");


    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }

    // Multiplication

    int multi;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            multi = 0;
            for(k=0;k<m;k++)  // k < rows of b or columns of a
            {
                multi+= a[i][k]*b[k][j];
            }
            c[i][j]=multi;
        }
    }

    // print result

    printf("\n\n\t\t    Resultant matrix: \n");
    for(i=0;i<m;i++)
    {
        printf("\n\t\t ");
        for(j=0;j<n;j++)
        {
            printf("\t%d ",c[i][j]);
        }
    }


    return 0;
}
