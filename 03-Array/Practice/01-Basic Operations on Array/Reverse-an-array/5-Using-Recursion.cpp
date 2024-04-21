/*
Author : Chaitaly Kundu
Date : 13-04-2024

Problem name : Reverse an Array

Purpose : Learn DSA
*/

#include <iostream>

using namespace std;

void reverseArray(int arr[], int start, int end) 
{ 
    if(start>=end)
        return ;

    
    int temp = arr[start]; 
    arr[start] = arr[end]; 
    arr[end] = temp; 
    start++; 
    end--; 

    reverseArray(arr, start+1, end-1);
    
}     
 

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n-1); 

    cout << "Reversed array is" << endl;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

/*
Time Complexity: O(n). 
The recursion goes through each element once, so it’s linear.

Auxiliary Space Complexity: O(n) 
for non in-place, O(log n) for in-place (due to recursion stack).
*/