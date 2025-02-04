/* Author : Chaitaly Kundu
   Date : 17-07-2021*/

/* Question Title : Check if the number is divisible by 5 or not using string */


#include<iostream>

using namespace std;

int main(){

    string n;
    cout << "Enter the number : ";
    cin >> n;

    int leng = n.length();
    if((n[leng-1]-'0')==0 || (n[leng-1]-'0')==5)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;
    return 0;
}