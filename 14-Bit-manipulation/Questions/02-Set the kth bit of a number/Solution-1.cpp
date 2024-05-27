/*
Author : Chaitaly Kundu
Date :  12/05/2024

Problem name : Set K-th bit of a number

Problem Link : https://www.geeksforgeeks.org/problems/set-kth-bit3724/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

Level : Basic

Purpose : Learn Bit Manipulation

Topic Tag : Bit Manipulation, Data Structure
Company Tag : Cisco, Qualcomm
*/



#include <iostream>
using namespace std;

bool checkBit(int num, int k)
{
    num = num >> (k-1);

    
}

int main()
{
    int n, k, ans;
    
    cout << "Enter the number ";
    cin >> n;

    cout << "\nEnter the position ";
    cin >> k;

    ans = checkBit(n, k);

    cout << ans;

    return 0;
}