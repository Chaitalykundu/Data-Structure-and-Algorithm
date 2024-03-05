// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        int sum;

        sum = (n * (n + 1)) / 2;

        for (int i = 0; i < n - 1; i++)
        {
            sum = sum - array[i];
        }

        return sum;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
} // } Driver Code Ends