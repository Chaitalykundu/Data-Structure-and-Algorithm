/* Author: Chaitaly Kundu
Date: 21st May, 2021 */

/* Linear Search */
#include<stdio.h>

int LinearSearch(int a[], int n, int s)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(s == a[i])
            return i;
    }
    return -1;
}

int main()
{
    int n,s,result;
    int a[]={1,2,3,4,5,6,7,8,9,10};

    n = sizeof(a)/ sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    result = LinearSearch(a,n,s);
    printf(" %d is in index %d", s, result);
    return 0;
}
