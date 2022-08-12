/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 7 or not without dividing by 5 directly */


#include<iostream>

using namespace std;

int divisible(int n)
{
    int d, q, diff ;

    d = 2 * ( n % 10);
    q = n/10;
    diff = q - d;
    if(diff %  7==0 )
        return 1;
    return 0;
}

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(divisible(n))
        cout << "Divisible by 7" << endl;
    else
        cout << "Not Divisible by 7" << endl;

    return 0;
}