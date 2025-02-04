/* Author: Chaitaly Kundu
Date: 12th march, 2021 */

/* Write a program to find out the average of three numbers. Use mean function.*/

#include<stdio.h>

float mean(float a, float b, float c)
{
    float avg;
    avg=(a+b+c)/3;
    return(avg);
}

int main()
{
    float x=7,y=3,z=12;
    float average;
    /* printf("Enter the three numbers: ");
    scanf("%d %d %d",x,y,z); */
    average=mean(x,y,z);
    printf("Average of three numbers is: %f",average);
    return 0;
}
