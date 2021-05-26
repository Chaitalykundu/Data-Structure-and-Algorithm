/* Author: Chaitaly Kundu
Date: 17th May, 2021 */

/* Binary Search using recursion */

#include<stdio.h>

int BinarySearch(int a[], int s, int l, int r)
{
    int mid=(l+r)/2;
    if(l>r)
        return -1;
    if(s == a[mid])
        return mid;
    else if(s<a[mid])
        return BinarySearch(a,s,l, mid-1);
    else
        return BinarySearch(a,s,mid+1, r);
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int result, data, n;

    n = sizeof(a)/ sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d",&data);

    result = BinarySearch(a, data, 0,n-1);
    printf("%d", result);
    return 0;
}