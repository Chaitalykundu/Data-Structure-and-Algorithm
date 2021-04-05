/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to rotate an array
 Ex:  a[5]={1,2,3,4,5}
    Output: 3,4,5,1,2 */
#include<iostream>

using namespace std;


int main()
{
    int n,i,j,temp;

    cout << "Enter the no of elements: " << endl;
    cin >> n ;
    int a[n];
    cout << "\nEnter the elements: " << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "\nArray Elements are\t: " << endl;

    for(i=0;i<n;i++)
    {
        cout << "\t" << a[i];
    }

    for(i=0;i<2;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j] = a[j+1];
        }
        a[n-1]=temp;
    }

    cout << "\nAfter rotating\t\t: ";
    for(i=0;i<n;i++)
    {
        cout << "\t" << a[i];
    }

    return 0;
}


/* Time Complexity = O(n*d)  n = no of elements
                             d = no of elements to be rotated

    Space Complexity =  O(1) */
