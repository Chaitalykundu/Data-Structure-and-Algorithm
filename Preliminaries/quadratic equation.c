/* Author: Chaitaly Kundu
Date: 12th march, 2021 */

/* Write a program to find out if the equation is unique and real or real and distinct or it has no real solution.
   If the equation has solution(s) find out the value(s)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a=1,b=-3,c=-4;
    float D,x,x1,x2;
    /* printf("\nEnter the value of a,b,c: ");
    scanf("\n%d %d %d",a,b,c); */

    // discriminant calculation
    D= (pow(b,2)-(4*a*c));

    if(D==0)
    {
        printf("\nThe equation is unique and real");
        x=-b/(2*a);
        printf("\nValue is %f",x);
    }
    else if(D>0)
    {
        printf("\nThe equation has two real and distinct solution");
        x1=(-b+(sqrt(D)))/(2*a);
        x2=(-b-(sqrt(D)))/(2*a);
        printf("\nValues are %f %f",x1,x2);
    }
    else
    {
        printf("\nThe equation has no real solution");
    }
    return 0;
}
