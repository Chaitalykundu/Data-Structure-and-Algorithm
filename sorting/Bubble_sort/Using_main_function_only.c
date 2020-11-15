/* Author: Chaitaly Kundu
Date: 15th nov,2020 */

// Implementing bubble sort algorithm in a C program using only one function (main)

#include<stdio.h>

// main function
int main()
{
    int a[10],n,e,i,j,temp,flag;

    // take input for no of element
    printf("Enter the no of element: ");
    scanf("%d",&n);

    // Take input for Elements
    printf("Elements are: ");
    for(e=0;e<n;e++)
    {
        scanf("%d",&a[e]);
    }

    // logic of bubble sort algorithm (ascending order)
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }

    // print sorted array
    printf("\nSorted array is: ");
    for(e=0;e<n;e++)
    {
        printf("\t%d",a[e]);
    }
    return 0;
}
