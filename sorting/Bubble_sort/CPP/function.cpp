/* Author: Chaitaly Kundu
Date: 15th nov,2020 */

// Implementing bubble sort algorithm in a C program using function

#include<iostream>
using namespace std;


// bubble_sort function definition
int bubble_sort(int a[],int n)
{
    int i,j,temp,flag;
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
}

// main function
int main()
{
    int n,e, arr[10];

    // take input for no of element
    cout << "Enter no of elements: ";
    cin >> n;

    // Take input for Elements
    cout << "Elements are: ";
    for(e=0;e<n;e++)
    {
        cin >> arr[e];
    }

    bubble_sort(arr,n);

    // print sorted array
    cout << "Sorted Array: ";
    for(e=0;e<n;e++)
    {
        cout << arr[e] << "\t" ;
    }
    return 0;
}

