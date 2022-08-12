/* Author : Chaitaly Kundu
   Date : 30-05-2022*/

/* Question Title : Wave Array
   Link : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?page=1&curated[]=8&sortBy=submissions#  */

#include<iostream>
#include<vector>
using namespace std;


void convertToWave(int n, vector<int>& arr){

    // Your code here
        for(int i=0;i<n-1;i+=2)
        {
            int temp= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int>a(n);
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    convertToWave(n,a);

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " " << endl;
    }
}