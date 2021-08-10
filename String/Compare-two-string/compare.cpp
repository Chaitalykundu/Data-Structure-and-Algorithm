/* Author : Chaitaly Kundu
   Date : 08-08-2021*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1 = "abc", s2 = "abc";

    if(!(s2.compare(s1)))  // s2 is compared with s1
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    cout << s2.compare(s1) << endl;

    return 0;
}