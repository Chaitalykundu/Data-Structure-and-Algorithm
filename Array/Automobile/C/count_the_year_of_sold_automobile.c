/*  Author : Chaitaly Kundu
    Date : 22-01-2021 */

/* Consider an array which records the number of automobiles sold each year from 1932  to 1984.
Find the number of years during Which more that 300 automobiles were sold.
Print each number which follow the condition */

#include <stdio.h>

int main() {
	// your code goes here
	int a[10000], i, length,year=1932,num=0, j;
	length = 1984-1932+1;

	// Sold automobiles per year
	for(i=0;i<length;i++)
	{
	    scanf("\n%d",&a[i]);
	}


	// Print the year and number of year which sold more than 300 automobiles
	printf("\n The years which sold more than 300 automobiles are : ");
    for(i=0;i<length;i++)
	{
	    if(a[i]>300)
	    {
	        j=i+year;
	        printf("\n%d ",j);
	        num++;
	    }
	}
	printf("\nnumber of year which sold more than 300 automobiles are %d", num );


	return 0;
}
