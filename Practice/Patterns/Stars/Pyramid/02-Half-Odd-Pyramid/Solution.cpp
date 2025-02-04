/*
Author : Chaitaly Kundu
Date : 1st June, 2024

Purpose : Revise Pattern
*/

#include <iostream>

using namespace std;

void half_odd_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter no of rows : ";
    cin >> n;

    half_odd_pyramid(n);

    return 0;
}

/*  O/P:
Enter no of rows : 5
*
* * *
* * * * *
* * * * * * *
* * * * * * * * *

*/