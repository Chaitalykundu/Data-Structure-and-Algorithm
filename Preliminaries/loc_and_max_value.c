/* Author: Chaitaly Kundu
Date: 12th march, 2021 */

// Write a program to find out the max value of an array and its location

#include<stdio.h>

int main()
{
    int a[10] = {3,5,2,6,4,9,4,6,2,1};
    int i, max=a[0],loc;
    /*printf("Enter the number of elements: ");
    scanf("%d",n);

    printf("Enter the elements: ");;
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }*/

    for(i=0;i<5;i++)
    {
        if(max<a[i+1])
        {
            max=a[i+1];
            loc=i+1;
        }
    }
    printf("\nMax value = %d",max);
    printf("\nLocation of max value = %d",loc);
    return 0;
}
