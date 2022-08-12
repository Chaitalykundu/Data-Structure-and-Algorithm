

/* Author : Chaitaly Kundu
   Date : 30-05-2022*/

/* Question Title : Search an Element in an array
   Link :  https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1/?page=1&curated[]=8&sortBy=submissions#
 */

#include<iostream>
using namespace std;


// check if the element is present in the array
int search(int arr[], int N, int X)
{
    // Your code here
    for(int i=0;i<N;i++){
        if(arr[i]==X)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    int ans = search(a, n, x);
    cout << ans << endl;
}