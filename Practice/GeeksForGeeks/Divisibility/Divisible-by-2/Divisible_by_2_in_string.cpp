/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : Check if the number is divisible by 2 or not without dividing by 2 */


#include<iostream>

using namespace std;

int main(){

    string n;
    cout << "Enter the number : ";
    cin >> n;

    int leng = n.length();
    if((n[leng-1]-'0')%2==0)
        cout << "Divisible by 2" << endl;
    else
        cout << "Not Divisible by 2" << endl;
    return 0;
}