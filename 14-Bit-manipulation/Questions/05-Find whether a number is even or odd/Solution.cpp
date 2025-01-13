#include <iostream>

using namespace std;

class Solution
{
public:
    bool isEven(int n)
    {
        // code here
        if (n & 1)
            return 0;
        return 1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int res = ob.isEven(N);
        
        if(res)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    }
    return 0;
}