/* Author: Chaitaly Kundu
Date: 18th nov,2020 */

// Implementing bubble sort algorithm in a C program using function

#include<stdio.h>

int bubble_sort(int [],int ); // bubble_sort function declaration
int swap(int [], int);
int print_elements(int [], int);


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


int print_elements(int c[], int n)
{
    int e;
    for(e=0;e<n;e++)
    {
        printf("\t%d",c[e]);
    }
}

int main()
{
    int c[10], n, e;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("Elements are: ");
    for(e=0;e<n;e++)
    {
        scanf("%d",&c[e]);
    }
    printf("\nArray before sorted: ");
    print_elements(c,n);

    bubble_sort(c,n);
    
    printf("\nArray after sorted: ");
    print_elements(c,n);
}
