/* Author : Chaitaly Kundu
   Date : 30-05-2022*/

/* Question Title : Bitonic Point
   Link :  https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/?page=1&curated[]=8&sortBy=submissions# */

#include<iostream>
#include<algorithm>
using namespace std;

// /* using sort 
int findMaximum(int arr[], int n) {
    // code here
    sort(arr,arr+n);
    return arr[n-1];
}

// */

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = findMaximum(a, n);
    cout << ans << endl;
    
    return 0;
}