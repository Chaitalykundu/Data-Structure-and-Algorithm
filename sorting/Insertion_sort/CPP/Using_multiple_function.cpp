/* Author: Chaitaly Kundu
Date: 12-04-2021 */

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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

	int n,i;
    cout << "Enter the no of elements: " << endl;
    cin >> n;

    int a[n];

    cout << "Elements are: " << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "Before Sorting: ";
    print_elements(a,n);

    InsertionSort(a,n);

    cout << "After Sorting: ";
    print_elements(a,n);

	return 0;
}
