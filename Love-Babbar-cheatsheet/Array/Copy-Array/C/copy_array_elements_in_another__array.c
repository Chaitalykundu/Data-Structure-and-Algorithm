/* Author: Chaitaly Kundu
Date: 08-04-2021 */

// Write a program to copy elements of one array in another array


#include<stdio.h>

// Store elements of one array in another array
void CopyArray( int a[], int b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];

    }
}

// Print Array
void PrintArray(int a[], int n){
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n\t\tIndex : %d --> Element: %d ",i,a[i]);
    }

}

int main(){
    int n,i;
    printf("\nEnter the no of elements: " );
    scanf("%d",&n);

    int a[n],b[n];

    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nOld Array : \n\t\t");
    PrintArray(a,n);

    CopyArray(a,b,n);

    printf("\nNew Array Elements: \n\t\t");
    PrintArray(b,n);
    return 0;
}
