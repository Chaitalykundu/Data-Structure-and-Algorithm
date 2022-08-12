/* Author : Chaitaly Kundu
   Date : 188-07-2021*/

/* Question Title : Check if the number is divisible by 9 or not without directly dividing by 9 */


#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum=0;
    while(n>0)
    {
        int d = n%10;
        sum = sum + d;
        n/=10;
    }
    if( sum % 9==0)
        cout << "Divisible by 9" << endl;
    else
        cout << "Not Divisible by 9" << endl;
    return 0;
}