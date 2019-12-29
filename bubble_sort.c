#include<stdio.h>


void BubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}


int main()
{
    int n,i, a[n];
    printf("\nEnter the no of elements: ");
    scanf("\n%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter elements: ");
        scanf("%d",&a[i]);
    }
    printf("\nSorted Elements: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\n");
}
