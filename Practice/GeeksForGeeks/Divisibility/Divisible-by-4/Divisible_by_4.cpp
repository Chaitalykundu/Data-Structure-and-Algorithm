/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 4 or not */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

        //  calculate last 2 digits
    int d = n%100;

    if( d%4 == 0)
        cout << "Divisible by 4" << endl;
    else
        cout << "Not Divisible by 4" << endl;
    return 0;
}