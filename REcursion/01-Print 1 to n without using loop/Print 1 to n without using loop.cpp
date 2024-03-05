/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

void printNums(int n)
{
    if (n == 0)
        return;
    printNums(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    printNums(n);
    return 0;
}