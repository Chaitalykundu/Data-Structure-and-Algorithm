/* Author: Chaitaly Kundu
Date: 21st May, 2021 */

/* Linear Search */
#include<stdio.h>

int LinearSearch(int a[], int n, int s)
{
    int i, c=0;

    for(i=0;i<n;i++)
    {
        if(s == a[i])
            c++;
    }
    if(c!=0)
        return c;
    else
        return 0;
}

int main()
{
    int n,s,result;
    int a[]={1,9,3,5,5,6,8,8,9,5};

    n = sizeof(a)/ sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    result = LinearSearch(a,n,s);
    printf(" %d presents %d times", s, result);
    return 0;
}
