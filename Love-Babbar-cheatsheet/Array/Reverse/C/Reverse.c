/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to reverse an array */
#include<stdio.h>


int reverse(int a[], int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

int printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int n,i;
    int a[10];
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements are: \t");
    printArray(a,n);
    reverse(a,n);
    printf("\nAfter reversing: \t");
    printArray(a,n);

    return 0;
}

/* Time Complexity = O(n)  n = no of elements

    Space Complexity =  O(1) */
