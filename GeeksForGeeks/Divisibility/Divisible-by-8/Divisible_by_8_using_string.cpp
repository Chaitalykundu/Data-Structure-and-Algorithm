/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 8 or not using string */


#include<iostream>

using namespace std;

bool divisible(string s)
{
    int n = s.length();

    int three_digits = s[n-1] +( (10* s[n-2]) + (100*s[n-3])-'0');

    if(three_digits %8 == 0)
        return 1;
    return 0;
}

int main(){

    string n;
    cout << "Enter the number : ";
    cin >> n;


    if(divisible(n))
        cout << "Divisible by 8" << endl;
    else
        cout << "Not Divisible by 8" << endl;
    return 0;
}