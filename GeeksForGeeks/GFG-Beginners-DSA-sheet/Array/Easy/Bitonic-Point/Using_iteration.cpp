/* Author : Chaitaly Kundu
   Date : 16-11-2023*/

/* Question Title : Bitonic Point
   Link :  https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&category=Arrays&difficulty=Easy&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions */

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findMaximum(int arr[], int n)
    {
        // code here

        int max = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < max)
                break;
        }
        return max;
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

        int a[n];
        cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;

        int ans = ob.findMaximum(a, n);
        cout << ans << endl;

        return 0;
    }
}