#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << sum << endl;
}