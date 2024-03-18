/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Prime Number or not
Level : Basic


Purpose : Crack Amazon interview
*/

// T.C = O(n)

#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    int isPrime(int n)
    {
        if (n <= 1)
            return 0;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;
        string res = ob.isPrime(n) ? "yes" : "no";
        cout << res << endl;
    }
}