/* Author: Chaitaly Kundu
Date: 18th nov,2020 */

// Implementing bubble sort algorithm in a C program using function

#include<stdio.h>

int bubble_sort(int [],int ); // bubble_sort function declaration
int swap(int [], int);
int printArray(int [], int);


int swap(int a[], int j)
{
    int temp;
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}

int bubble_sort(int b[], int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                swap(b,j);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}


int printArray(int c[], int n)
{
    int e;
    for(e=0;e<n;e++)
    {
        printf("\t%d",c[e]);
    }
}

int main()
{
    /* int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]); */

    int n,i;
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("\nElements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nBefore Sorting: ");
    printArray(a,n);

    bubble_sort(a,n);

    printf("\nAfter Sorting\t: ");
    printArray(a,n);

    return 0;

}
