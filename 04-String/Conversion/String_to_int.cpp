/* Author : Chaitaly Kundu
   Date : 09-08-2021*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "123456";
    cout << sizeof(s) << endl;

    int n = stoi(s);
    cout << n << endl;
    cout << sizeof(n) << endl;

    return 0;
}