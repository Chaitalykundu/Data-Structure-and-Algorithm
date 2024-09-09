#include <iostream>

using namespace std;

int prime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int res = prime(n);

    if (res)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}