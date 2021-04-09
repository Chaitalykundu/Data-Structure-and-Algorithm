/* Author: Chaitaly Kundu
Date: 08-04-2021 */

// Write a program to copy elements of one array in another array


#include<iostream>
using namespace std;

// Store elements of one array in another array
void CopyArray( int a[], int b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];

    }
}

// Print Array
void PrintArray(int a[], int n){
    int i;

    for(i=0;i<n;i++)
    {
        cout << "Index : " << i << " \tElement : " << a[i] << "\n\t\t";
    }
    cout << endl;
}

int main(){
    int n,i;
    cout << "\nEnter the no of elements: " ;
    cin >> n;

    int a[n],b[n];

    cout << "\nEnter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "\nOld Array : \n\t\t";
    PrintArray(a,n);

    CopyArray(a,b,n);

    cout << "\nNew Array Elements: \n\t\t";
    PrintArray(b,n);
    return 0;
}
