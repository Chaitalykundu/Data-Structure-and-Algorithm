/* Author : Chaitaly Kundu
   Date : 10-09-2021*/

#include <iostream>
#include <algorithm>
using namespace std;

class Factorial
{
public:
    int fact(int n)
    {
        if (n == 1)
            return 1;
        return (n * fact(n - 1));
    }
};

int main()
{

    int n = 6;

    Factorial obj;

    int factorial_of_n = obj.fact(n);
    cout << factorial_of_n << endl;

    return 0;
}