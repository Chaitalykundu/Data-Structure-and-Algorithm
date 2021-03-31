/* Author : Chaitaly Kundu
   Date: 31-03-2021 */

/* WAP to see the entered numbers and their locations using malloc */
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
        printf("Memory not found");
        exit(1);
    }

    printf("Enter the integers: ");
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

    return 0;
}
