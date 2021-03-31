
/* Author : Chaitaly Kundu
   Date: 31-03-2021 */

/* WAP to see the entered and reentered numbers and their locations using realloc() */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("\nMemory not found");
        exit(1);
    }

    printf("\nEnter the integers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }


    printf("Entered numbers and their locations are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d  ",*(ptr+i));
        printf("%d  ", (ptr+i));

    }

    ptr = (int *)realloc(ptr, (n+2)*sizeof(int));

    if(ptr == NULL)
    {
        printf("\nMemory not found");
        exit(1);
    }

    printf("\nEnter two more numbers: ");
    for(i=n;i<n+2;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nAfter adding two more elements final numbers and locations are: ");
    for(i=0;i<n+2;i++)
    {
        printf("\n%d  ",*(ptr+i));
        printf("%d  ", (ptr+i));

    }
    return 0;
}
