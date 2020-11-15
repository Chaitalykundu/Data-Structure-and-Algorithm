/* Author: Chaitaly Kundu
Date: 15th nov,2020 */

// Implementing bubble sort algorithm in a C program using function

#include<stdio.h>

int bubble_sort(int [],int );

int bubble_sort(int a[],int n)
{
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1;j++)
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
}
// main function
int main()
{
    int n,e, arr[10];
    printf("Enter no of elements: ");
    scanf("%d",&n);

    printf("Elements are: ");
    for(e=0;e<n;e++)
    {
        scanf("%d",&arr[e]);
    }
    bubble_sort(arr,n);

    printf("Sorted Array: ");
    for(e=0;e<n;e++)
    {
        printf("\t%d",arr[e]);
    }
}