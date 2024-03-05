/* Author : Chaitaly Kundu
   Date : 30-05-2022*/

/* Question Title : Wave Array
   Link : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?page=1&curated[]=8&sortBy=submissions#  */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int> &arr)
    {

        // Your code here

        int temp;

        for (int i = 0; i < n - 1; i += 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            // Or
            // swap (arr[i],arr[i+1]);
        }
    }
};

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {

        cout << "Enter the number of elements in the array: ";
        cin >> n;

        vector<int> a(n);
        cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        Solution ob;

        ob.convertToWave(n, a);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}