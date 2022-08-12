/* Author : Chaitaly Kundu
   Date : 18-07-2021*/

/* Question Title : Check if the number is divisible by 5 or not without dividing by 5 */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int d = n%10;
    if(d==0 || d==5)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;
    return 0;
}