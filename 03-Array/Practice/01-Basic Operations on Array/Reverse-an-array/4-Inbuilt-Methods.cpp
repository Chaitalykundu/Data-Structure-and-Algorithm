/*
Author : Chaitaly Kundu
Date : 12-04-2024

Problem name : Reverse an Array

Purpose : Learn DSA
*/

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(arr,arr+n); 

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    

    return 0;
}

/*
Time Complexity: O(n)
The reverse method typically has linear time complexity.

Auxiliary Space Complexity: O(1)
In-place reversal, meaning it doesn’t use additional space.
*/