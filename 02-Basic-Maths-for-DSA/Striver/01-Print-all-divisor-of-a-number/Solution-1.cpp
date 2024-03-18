/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Print all divisor of a number
Level : Basic

Purpose : Crack Amazon interview
*/


// T.C. : O(n)

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void findDivisor(int n)
    {

        for (int i = 1; i <= n ; i++)
        {
            if (n % i == 0)
            {
                cout << i<< " ";
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