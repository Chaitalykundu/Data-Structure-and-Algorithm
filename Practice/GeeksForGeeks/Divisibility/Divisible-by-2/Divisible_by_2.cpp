/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : Check if the number is divisible by 2 or not without dividing by 2 */


#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int d = n%10;
    if(d==0 || d==2 || d==4 || d==6 || d==8)
        cout << "Divisible by 2" << endl;
    else
        cout << "Not Divisible by 2" << endl;
    return 0;
}