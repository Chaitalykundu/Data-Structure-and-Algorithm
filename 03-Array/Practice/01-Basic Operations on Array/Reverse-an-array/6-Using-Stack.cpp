/*
Author : Chaitaly Kundu
Date : 13-04-2024

Problem name : Reverse an Array

Purpose : Learn DSA
*/

#include <iostream>
#include <stack>


using namespace std;

void reverseArray(int arr[], int n) 
{ 
    stack<int> stack;
 
    // Push elements onto the stack
    for (int i = 0; i < n; i++) {
        stack.push(arr[i]);
    }
 
    // Pop elements from the stack to reverse the array
    for (int i = 0; i < n; i++) {
        arr[i] = stack.top();
        stack.pop();
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
Pushing and popping each element onto/from the stack requires linear time.

Auxiliary Space Complexity: O(n)
Additional space is used to store the stack.
*/