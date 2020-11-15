// Author: Chaitaly Kundu
// Date: 16th nov,2020

// Implement bubble sort algorithm in a C++ program using only one function (main)

#include<iostream>

using namespace std;

// main function
int main()
{
    int a[10],n,e,i,j,temp,flag;

    // take input for no of element
    cout << "Enter the no of element: " ;       // cout is to display anything. It's like printf
    cin >> n ;      // cin is used to take input. It works like scanf

    // Take input for Elements
    cout << "Elements are: " ;
    for(e=0;e<n;e++)
    {
        cin >> a[e] ;
    }

    // logic of bubble sort algorithm (ascending order)
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }

    // print sorted array
    cout << "Sorted array: " ;
    for(e=0;e<n;e++)
    {
        cout << "\t" << a[e] ;
    }
}