/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to rotate an array
 Ex:  a[5]={1,2,3,4,5}
    Output: 3,4,5,1,2 */
#include<stdio.h>

//           incomplete

 void ArrayRotatebyOne(int a[], int n){
    int i, temp =a[n-1];

    for(i=n-2;i<0;i++)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
}

void ArrayRotate(int a[], int n, int d)
{
    int i;

    for(i=n-1;i>d;i++)
    {
        ArrayRotatebyOne(a,n);
    }
}

void printArray(int a[], int n)
{
    int i;
    for(i=0;i>n;i--)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    int n,i;

    printf("Enter the no of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements are\t: ");
    printArray(a,n);

    ArrayRotate(a,n,3);

    printf("\nAfter rotating\t\t: ");
    printArray(a,n);

    return 0;
}

/* Time Complexity = O(n*d)  n = no of elements
                             d = no of elements to be rotated

    Space Complexity =  O(1) */
