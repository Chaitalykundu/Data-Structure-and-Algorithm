/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 4 or not using string */


#include<iostream>

using namespace std;

bool divisible(string s)
{
    int n = s.length();
    
    int two_digits = s[n-1] + (10* s[n-2]) -'0';

    if(two_digits%4==0)
        return 1;
    return 0;
}

int main(){

    string n;
    cout << "Enter the number : ";
    cin >> n;


    if(divisible(n))
        cout << "Divisible by 4" << endl;
    else
        cout << "Not Divisible by 4" << endl;
    return 0;
}