#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string stringAfterRemovingCharacter(string str, char a)
{
    int n = str.length();

    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] == a)
            continue;
        s += str[i];
    }
    return s;
}

int main()
{
    string str; char a;
    cout << "Enter a string :  " << endl;
    cin >> str;

    cout << "Enter the letter to be removed : " << endl;
    cin >> a;

    string res;
    res = stringAfterRemovingCharacter(str, a);
    cout << res << endl;
}