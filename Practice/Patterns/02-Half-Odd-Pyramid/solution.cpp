#include <iostream>

using namespace std;

int halfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cin >> n;
    halfPyramid(n);
    return 0;
}