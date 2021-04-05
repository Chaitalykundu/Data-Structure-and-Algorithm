/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to rotate an array
 Ex:  a[5]={1,2,3,4,5}
    Output: 3,4,5,1,2 */
#include<stdio.h>

int rotate(int a[], int n)
{
    int i,temp[5],d=2;
    for(i=0;i<d;i++)
    {
        temp[i]=a[i];
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
    printf("\nArray Elements are\t: ");
    printArray(a,n);
    rotate(a,n);
    printf("\nAfter rotating\t\t: ");
    printArray(a,n);

    return 0;
}
