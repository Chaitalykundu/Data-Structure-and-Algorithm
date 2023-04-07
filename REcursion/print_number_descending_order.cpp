/* Author : Chaitaly Kundu
   Date : 10-09-2021*/

#include <iostream>
#include <algorithm>
using namespace std;

class print_number_descending_order
{
public:
    int print_numbers(int n)
    {
        if (n == 0)
            return 0;
        cout << n << " ";
        return print_numbers(n - 1);
    }
};

int main()
{

    int n = 10;

    print_number_descending_order obj;

    obj.print_numbers(n);
    cout << endl;

    return 0;
}