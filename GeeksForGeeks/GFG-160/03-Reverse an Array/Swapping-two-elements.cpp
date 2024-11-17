#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here

        int n = arr.size();

        int temp;
        for (int i = 0; i < n / 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    Solution ob;

    ob.reverseArray(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}