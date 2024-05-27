/* Author: Chaitaly Kundu
Date: 21st May, 2021 */

/* Linear Search */
#include<stdio.h>

int LinearSearch(int a[], int n, int i, int s)
{

    if(i>=n)
        return 0;
    else if(s==a[i])
        return i;
    else
        return LinearSearch(a, n, i+1,s);
}

int main()
{
    int n,s,result, i=0;
    int a[]={1,2,3,4,5,6,7,8,9,10};

    n = sizeof(a)/ sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    result = LinearSearch(a,n,i,s);
    printf(" %d is in index %d", s, result);
    return 0;
}
