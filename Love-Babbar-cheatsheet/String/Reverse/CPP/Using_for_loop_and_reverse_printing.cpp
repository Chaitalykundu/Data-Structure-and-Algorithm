/* Author : Chaitaly Kundu
   Date: 09-04-2021 */

/* WAP to reverse a string using while loop */

#include<bits/stdc++.h>

using namespace std;

void reverse(string str)
{
    int i, n;

    n=str.length();

    for(i=n-1;i>=0;i--)
        cout << str[i];
}


int main(){
    string str;
    cout << "\nEnter a string: " ;
    cin >> str;

    cout << "\nString Before Reverse: " << str;

    cout << "\nString After Reverse: " ;
    reverse(str);

    return 0;
}


/* Time Complexity = O(n)  n = no of elements

    Space Complexity =  O(1) */
