/*
Author : Chaitaly Kundu
Date : 18-03-2024

Problem name : Number of factors
Level : Easy

Problem link : https: // www.geeksforgeeks.org/problems/number-of-factors1435/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


Purpose : Crack Amazon interview

Topic : Misc
*/

// T.C. : O(n)

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int countFactors(int N)
    {
        // code here

        int count = 0;
        for (int i = 1; i <= N; i++)
        {
            if (N % i == 0)
                count++;
        }
        return count;
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

        cout << ob.countFactors(n) << endl;
    }
    return 0;
}