/* Author: Chaitaly Kundu
Date: 21st May, 2021 */

/* Linear Search */
#include<stdio.h>

int LinearSearch(int a[], int n, int s)
{
    int first=0, last=n-1;

    while(first<last)
    {
        if(s == a[first])
        {
            return first;
            break;
        }
        if(s == a[last])
        {
            return last;
            break;
        }
        first++;
        last--;
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
    if(result !=-1)
        printf(" %d is in index %d", s, result);
    else
        printf("Element not found");
    return 0;
}

/* if element Found at last  O(n) to O(1)
if element Not found O(n) to O(n/2) */