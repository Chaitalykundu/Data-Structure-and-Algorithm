/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

int fibonacci_series(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibonacci_series(n - 1) + fibonacci_series(n - 2));
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci_series(n);
    return 0;
}