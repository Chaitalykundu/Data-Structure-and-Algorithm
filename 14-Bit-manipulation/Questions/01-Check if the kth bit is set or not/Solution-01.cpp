/*
Author : Chaitaly Kundu
Date :  12/05/2024

Problem name : Check whether K-th bit is set or not

Problem Link : https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

Level : Easy

Purpose : Learn Bit Manipulation

Topic Tag : Bit Manipulation, Data Structure
Company Tag : Microsoft
*/



#include <iostream>
using namespace std;

bool checkKthBit(int n, int k)
{
    // Your code here
    // It can be a one liner logic!! Think of it!!
    int bit=n>>k;
    return bit&1;
}

int main()
{
    int n, pos;
    
    cout << "Enter the number ";
    cin >> n;

    cout << "\nEnter the position ";
    cin >> pos;

    if (checkKthBit(n, pos))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}