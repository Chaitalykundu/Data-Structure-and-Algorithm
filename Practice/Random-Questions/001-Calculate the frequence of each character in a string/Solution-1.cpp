#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string countOccurrence(string str)
{
    string s = "";
    sort(str.begin(), str.end());
    int n = str.length();
    int c = 1, i;

    for (i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
            c++;
        else
        {

            s += str[i] + to_string(c) + "\n";
            c = 1;
        }
    }
    s += str[n-1] + to_string(c);
    return s;
}

int main()
{
    string str;
    cout << "enter " << endl;
    cin >> str;

    string res;
    res = countOccurrence(str);
    cout << res << endl;
}