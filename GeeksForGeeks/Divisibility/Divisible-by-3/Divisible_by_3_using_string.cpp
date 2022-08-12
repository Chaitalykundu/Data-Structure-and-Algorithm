/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 4 or not using string */


#include<iostream>

using namespace std;

bool divisible(string s)
{
    int n = s.length();

    int sum = 0;
    while(n>0)
    {
        sum = sum + (s[n-1]-'0');
        n--;
    }

    if(sum % 3==0)
        return 1;
    return 0;
}

int main(){

    string n;
    cout << "Enter the number : ";
    cin >> n;


    if(divisible(n))
        cout << "Divisible by 3" << endl;
    else
        cout << "Not Divisible by 3" << endl;
    return 0;
}