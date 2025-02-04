/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by  or not */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

        //  calculate last 3 digits
    int d = n%1000;

    if( d%8 == 0)
        cout << "Divisible by 8" << endl;
    else
        cout << "Not Divisible by 8" << endl;
    return 0;
}