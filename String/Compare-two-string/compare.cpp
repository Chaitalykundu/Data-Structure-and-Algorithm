/* Author : Chaitaly Kundu
   Date : 08-08-2021*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1 = "abcde", s2 = "wxyz";

    if(s1.compare(s2))
        cout << "Strings are equal" << endl;
    cout << s1.compare(s2) << endl;

    return 0;
}