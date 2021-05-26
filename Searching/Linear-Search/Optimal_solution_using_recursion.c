/* Author: Chaitaly Kundu
Date: 26th May, 2021 */

/* Linear Search optimal solution using recursion */
#include<stdio.h>

int LinearSearch(int a[], int l, int r, int s)
{

    if(l>r)
        return 0;
    if(s==a[l])
        return l;
    if(s==a[r])
        return r;
    else
        return LinearSearch(a, l+1, r-1, s);
}

int main()
{
    int n,s,result, i=0;
    int a[]={1,2,3,4,5,6,7,8,9,10};

    n = sizeof(a)/ sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    result = LinearSearch(a,i,n-1,s);
    printf(" %d is in index %d", s, result);
    return 0;
}
