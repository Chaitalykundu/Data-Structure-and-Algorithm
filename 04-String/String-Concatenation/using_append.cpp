/* Author : Chaitaly Kundu
   Date : 08-08-2021*/

// It concatenate 2 string. The 1st string will be changed totally. But 2nd one will remain same

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "Moni", s2 = "sha";
    s1.append(s2);
    cout << s1 << endl;     // O/P: Monisha
    cout << s2 << endl;     // O/P: sha

    string str1 = "Chaitaly is a ", str2 = "programmer";
    str1.append(str2);
    cout << str1 << endl;   // O/P: Chaitaly is a programmer
    cout << str2 << endl;   // O/P: programmer

    return 0;
}