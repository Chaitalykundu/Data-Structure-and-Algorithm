/* Author : Chaitaly Kundu
   Date : 10-09-2021*/

#include <iostream>
#include <algorithm>
using namespace std;

class print_number_descending_order
{
public:
    void print_numbers(int n)
    {
        if (n == 1)
        {
            cout << '1' << " ";
            return;
        }
        cout << n << " ";
        print_numbers(n - 1);
    }
};

int main()
{

    int n;
    cin >> n;

    print_number_descending_order obj;

    obj.print_numbers(n);
    cout << endl;

    return 0;
}