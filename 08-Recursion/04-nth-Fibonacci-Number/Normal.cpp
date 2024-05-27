/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

int fibonacci_num(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci_num(n);
    return 0;
}