#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n&1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
}