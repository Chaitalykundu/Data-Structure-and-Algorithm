/* Author : Chaitaly Kundu
   Date: 09-04-2021 */

/* WAP to find the maximum and minimum element in an array */


#include <bits/stdc++.h>
using namespace std;


// Maximum
void max(int a[], int n)
{
    int i, max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout << "\nMaximum number is: " << max;
}


// Minimum
void min(int a[], int n)
{
    int i, min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout << "\nMinimum number is: " << min;
}


// driver code
int main()
{
    int n,i;
    cout << "\nEnter the no of elements: " ;
    cin >> n;

    int a[n];

    cout << "\nEnter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    // Minimum and Maximum element in an array
    max(a,n);
    min(a,n);

    return 0;
}
