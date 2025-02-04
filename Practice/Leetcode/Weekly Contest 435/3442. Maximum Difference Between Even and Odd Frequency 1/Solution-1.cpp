/*
 Author : Chaitaly Kundu
 Date : 02 - 02 - 2025


Question name : 3442. Maximum Difference Between Even and Odd Frequency I

 Question link : https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/

Time complexity : O(n log n)
*/

class Solution
{
public:
    int maxDifference(string s)
    {
        int n = s.length();
        sort(s.begin(), s.end());

        int c = 1, evenCount = INT_MAX, oddCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
                c++;
            else
            {
                if (c & 1)
                {
                    if (c >= oddCount)
                        oddCount = c;
                }
                else
                {
                    if (c <= evenCount)
                        evenCount = c;
                }
                c = 1;
            }
        }
        return (oddCount - evenCount);
    }
};
