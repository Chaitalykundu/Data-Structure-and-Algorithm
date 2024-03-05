/* Author : Chaitaly Kundu
   Date : 30-05-2022*/

/* Question Title : Missing number in array
   Link :  https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?page=1&curated[]=8&sortBy=submissions# */

#include<iostream>
#include<vector>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
        // Your code goes here

    long long int sum=0;

    long long int total_sum = (n*(n+1))/2;

    for(int i=0;i<n-1;i++){
        sum += array[i];
    }

    int missing_number = (total_sum - sum);
    return missing_number;
}


int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> array(n);
    cout << "Enter the array elements : ";
    for (int i = 0; i < n-1; i++) {
        cin >> array[i];
    }


    int ans = MissingNumber(array, n);
    cout << ans << endl;
}