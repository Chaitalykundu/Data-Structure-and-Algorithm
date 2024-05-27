/*
Author : Chaitaly Kundu
Date : 22/12/2023

*/

#include <iostream>

using namespace std;

void printNums(int n)
{
    for (int i = 1; i <= n; i++)
        cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    printNums(n);
    return 0;
}