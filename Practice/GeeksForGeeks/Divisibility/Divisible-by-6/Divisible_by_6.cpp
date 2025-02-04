/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 6 or not without dividing by 6 */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(n%2==0 && n%3==0)
        cout << "Divisible by 6" << endl;
    else
        cout << "Not Divisible by 6" << endl;
    return 0;
}