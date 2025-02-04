/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 3 or not */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if( n%3 == 0)
        cout << "Divisible by 3" << endl;
    else
        cout << "Not Divisible by 3" << endl;
    return 0;
}