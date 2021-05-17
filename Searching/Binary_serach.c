/* Author: Chaitaly Kundu
Date: 17th May, 2021 */

/* Binary Search */

#include<stdio.h>

int BinarySearch(int a[], int n, int data)
{
    int l = 0, r = n-1, mid;

    while(l<=r){
        mid = (l + r) / 2;
        if(data == a[mid])
        {
            return mid;
        }
        else if( data > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int result;
    int data;

    printf("Enter the element to be searched: ");
    scanf("%d",&data);

    result = BinarySearch(a,10,data);
    printf("%d", result);
    return 0;
}