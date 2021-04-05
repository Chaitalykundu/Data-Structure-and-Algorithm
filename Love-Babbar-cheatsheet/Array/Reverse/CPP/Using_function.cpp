/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to reverse an array */
#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        cout << "\t" << a[i];
}

int main()
{
    int n,i;
    int a[10];
    cout << "Enter the no of elements: " ;
    cin >> n;
    cout <<  "\nEnter the elements: " ;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "\nArray Elements are: \t";
    printArray(a,n);
    reverse(a,n);
    cout << "\nAfter reversing: \t";
    printArray(a,n);

    return 0;
}
