#include<stdio.h>
void selection(int a[], int n)
{
    int i,j,temp,pos;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                pos=j;
            }
        }
        temp=a[pos];
        a[pos]=a[i];
        a[i]=temp;
    }
}

void main()
{
    int i,n,a[n];
    printf("\n Enter no of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements: ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("Sorted array: ");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}

