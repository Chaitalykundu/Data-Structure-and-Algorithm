/* Author: Chaitaly Kundu
Date: 08-04-2021 */

// Write a program to rotate an array (d elements)


#include<iostream>
using namespace std;


void ArrayRotatebyOne(int a[], int n){
    int i, temp =a[0];
    
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}

void ArrayRotate(int a[], int n, int d)
{
    int i;
    
    for(i=0;i<d;i++)
    {
        ArrayRotatebyOne(a,n);
    }
}

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
    
    ArrayRotate(a,n,3);
    
    cout << "\nArray After Rotate: ";
    PrintArray(a,n);
    return 0;
}



/* Time Complexity = O(n*d)  n = no of elements
                             d = no of elements to be rotated

    Space Complexity =  O(1) */