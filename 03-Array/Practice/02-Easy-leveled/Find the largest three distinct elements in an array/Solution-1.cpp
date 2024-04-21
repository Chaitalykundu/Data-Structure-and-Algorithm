/*
Author : Chaitaly Kundu
Date : 13-04-2024

Problem name : Find the largest three distinct elements in an array

Purpose : Learn DSA
*/


#include <iostream>
#include <algorithm>

using namespace std;

void largestThree(int arr[], int n){
    sort(arr,arr+n);

    for (int i = n-3; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    largestThree(arr,n);

    return 0;    
}