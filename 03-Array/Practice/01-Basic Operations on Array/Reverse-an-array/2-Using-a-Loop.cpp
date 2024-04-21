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
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
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
    cout << "Reversed array is" << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*
Time Complexity: O(n)
The loop runs through half of the array, so it’s linear with respect to the array size.

Auxiliary Space Complexity: O(1)
In-place reversal, meaning it doesn’t use additional space.
*/