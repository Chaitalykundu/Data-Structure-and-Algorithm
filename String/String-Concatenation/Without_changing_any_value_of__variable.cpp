/* Author : Chaitaly Kundu
   Date : 08-08-2021*/

// It concatenate 2 string. The 1st string will be changed totally. But 2nd one will remain same

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "Moni", s2 = "sha";

    string s3 = s1 + s2;
    cout << s3 << endl;     // O/P: Monisha

    string str1 = "Chaitaly is a ", str2 = "programmer";
    string str3 = str1 + str2;
    cout << str3 << endl;   // O/P: Chaitaly is a programmer

    return 0;
}