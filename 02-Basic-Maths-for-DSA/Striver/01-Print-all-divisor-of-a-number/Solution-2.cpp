/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Print all divisor of a number
Level : Basic

Purpose : Crack Amazon interview
*/

// T.C. : O(sqrt(n))

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    void findDivisor(int n)
    {

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
                if (n / i != i)
                    cout << (n / i) << " ";
            }
        }
    }
};

int main()
{
    int n;

    cin >> n;

    Solution ob;

    ob.findDivisor(n);
}