/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Print Prime factor(s) of a number
Level : Basic


Purpose : Crack Amazon interview
*/

// T.C = O(n) Optimized

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

    void primeFactor(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (isPrime(i))
                {
                    cout << i << " ";
                    if ((n / i != i) && isPrime(n / i))
                        cout << n / i << " ";
                }
            }
        }
        if (isPrime(n))
            cout << n;
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
        ob.primeFactor(n);
        cout << endl;
    }
}