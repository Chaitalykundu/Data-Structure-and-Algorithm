/* Author : Chaitaly Kundu
   Date: 14-04-2021 */

/* Selection sort using for loop */


#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int a[], int n)
{
    int i, j, min;
    for(i=0;i<n-1;i++) // Pass
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        swap(&a[min],&a[i]);
    }
}


void print_elements(int a[], int n)
{
    int e;
    for(e=0;e<n;e++)
    {
        cout << "\t" << a[e];
    }
    cout << endl;

}
int main() {
	// your code goes here

	/*  int n,i;
    cout << "Enter the no of elements: " << endl;
    cin >> n;

    int a[n];

    cout << "Elements are: " << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }  */
    int a[] = {6, 2, 1, 4, 3};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Before Sorting: ";
    print_elements(a,n);

    SelectionSort(a,n);

    cout << "After Sorting\t: ";
    print_elements(a,n);

	return 0;
}
