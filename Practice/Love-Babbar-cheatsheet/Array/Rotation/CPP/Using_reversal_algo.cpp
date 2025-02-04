/* Author: Chaitaly Kundu
Date: 09-04-2021 */

// Write a program to rotate an array (d elements) using reverse process


#include<iostream>
using namespace std;

void reverse( int a[], int start, int end)
{
    int temp;

    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

void RotateArray(int a[], int d, int n)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}


// Print Array
void PrintArray(int a[], int n){
    int i;

    for(i=0;i<n;i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}



int main(){
    int n,i;
    cout << "\nEnter the no of elements: " ;
    cin >> n;

    int a[n];

    cout << "\nEnter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "\nArray Before Rotate: ";
    PrintArray(a,n);

    RotateArray(a,4,n);

    cout << "\nArray After Rotate: ";
    PrintArray(a,n);
    return 0;
}

/* Time Complexity = O(n)  n = no of elements

    Space Complexity =  O(1) */
