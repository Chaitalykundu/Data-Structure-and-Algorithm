/*
Author : Chaitaly Kundu
Date : 1st June, 2024 

Purpose : Revise Pattern
*/


#include <iostream>

using namespace std;

void rectangle_pattern(int row, int col)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    rectangle_pattern(row, col);

    return 0;
}

/*  O/P:
Enter the number of rows and columns: 3
4
* * * *
* * * *
* * * *

*/