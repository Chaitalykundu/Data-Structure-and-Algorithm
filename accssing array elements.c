#include<stdio.h>
int main()
{
    int arr[10];
    arr[0]=4;
    arr[4]=6;
    arr[4/2]=9;     //arr[4/2]=arr[2]
    arr[3/2]=7;     //arr[3/2]=arr[1]
    arr[3]=arr[4];
    arr[2];

    printf("%d %d %d %d %d %d",arr[0],arr[4],arr[4/2],arr[3/2],arr[3],arr[2]);
}
