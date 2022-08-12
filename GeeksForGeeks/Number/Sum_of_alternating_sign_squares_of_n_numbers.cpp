/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : sum of alternating sign squares of n natural numbers */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum_of_natural_number = (n * (n+1))/2;
    int sign, sum_of_alternating_sign_squares;
    if((n+1)%2==0)
        sign = 1;
    else
        sign = -1;

    sum_of_alternating_sign_squares = sum_of_natural_number * sign;

    cout << sum_of_alternating_sign_squares << endl;

    return 0;
}