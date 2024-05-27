/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

int SumofN(int n)
{
    if (n == 0)
        return 0;
    return n + SumofN(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << SumofN(n);
    return 0;
}