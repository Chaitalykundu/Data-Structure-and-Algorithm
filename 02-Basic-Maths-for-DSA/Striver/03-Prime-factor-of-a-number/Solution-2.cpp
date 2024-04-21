/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Print Prime factor(s) of a number
Level : Basic


Problem link : https://www.geeksforgeeks.org/problems/prime-factors5052/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

Purpose : Crack Amazon interview
*/

// T.C = O(n)

// not correct

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