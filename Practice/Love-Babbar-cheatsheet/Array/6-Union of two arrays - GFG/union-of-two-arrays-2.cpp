//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function template in C++

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        int temp[n + m];

        for (int i = 0; i < n; i++)
        {
            temp[i] = a[i];
        }

        for (int i = 0; i < m; i++)
        {
            temp[n + i] = b[i];
        }

        sort(temp, temp + n + m);

        int c = 1;

        for (int i = 0; i < n + m - 1; i++)
        {
            if (temp[i] != temp[i + 1])
                c++;
            else
                continue;
        }
        return c;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
}
// } Driver Code Ends