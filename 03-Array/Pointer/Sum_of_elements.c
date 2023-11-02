/* Author : Chaitaly Kundu
   Date: 30-03-2021 */

/* sum of elements of an array using pointer */
#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    int *p, sum=0;

    for(p=a;p<a+5;p++)   // p=a is same as p=&a[0]
    {
        sum=sum+ *p;
    }
    printf("Sum = %d", sum);
}
