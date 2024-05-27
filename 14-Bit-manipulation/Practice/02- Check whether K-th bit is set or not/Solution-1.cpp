/*
Author : Chaitaly Kundu
Date :  12/05/2024

Problem name :  Check whether K-th bit is set or not
Level : Easy

Problem Link : https://www.naukri.com/code360/guided-paths/data-structures-algorithms-new/content/662524/offering/10866811?dashboardRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav

Purpose : Learn Bit Manipulation

Topic : Bit Manipulation
Company Tag : Amazon, Google, D.E shaw
*/


#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

bool isKthBitSet(int n, int k)
{
    // Write your code here.
    n = n>>(k-1);

    if(n&1)
        return 1;
    return 0;
}

int main() {
    int n,k;
    cin >> n >> k;
    cout<<isKthBitSet(n,k);
    return 0;
}