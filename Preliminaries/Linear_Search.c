/* Author: Chaitaly Kundu
Date: 12th march, 2021 */

/* Linear Search */
#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,s,c=0;

    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    for(i=0;i<10;i++)
    {
        if(s==a[i])
        {
            c++;
            printf("The element is found in %d position ",i);
        }
    }
    if(c==0)
    {
        printf("Element not found");
    }
    return 0;
}
