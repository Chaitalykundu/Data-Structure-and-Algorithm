/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

int fibonacci_num(int n)
{
    if (n == 0 || n == 1)
        return n;
    return (fibonacci_num(n - 1) + fibonacci_num(n - 2));
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci_num(n);
    return 0;
}