/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>
#include <cmath>

using namespace std;

int NpowerofP(int n, int p)
{
    if (p == 0)
        return 1;
    return (n * pow(n, p - 1));
}

int main()
{
    int n, p;
    cin >> n >> p;

    cout << NpowerofP(n, p);
    return 0;
}