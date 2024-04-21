/*
Author : Chaitaly Kundu
Date : 12-04-2024

Problem name : Reverse an Array

Purpose : Learn DSA
*/

#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{

    int result[n];

    for (int i = 0; i < n; i++)
    {
        result[i] = arr[n - i - 1];
        cout << result[i] << " ";
    }
}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, n);
    return 0;
}


/*
Time Complexity: O(n)
Copying elements to a new array is a linear operation.

Auxiliary Space Complexity: O(n)
Additional space is used to store the new array.
*/