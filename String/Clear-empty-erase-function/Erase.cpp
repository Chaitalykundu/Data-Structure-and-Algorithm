/* Author : Chaitaly Kundu
   Date : 09-08-2021*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1 = "Monishaa";
    s1.erase(6,1);  // 6 is the number after which the letter have to be erased. 1 is the number how many numbers have to be erased
    cout << s1 << endl;  // o/p: Monisha
    return 0;
}