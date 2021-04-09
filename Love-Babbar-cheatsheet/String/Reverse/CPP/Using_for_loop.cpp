/* Author : Chaitaly Kundu
   Date: 09-04-2021 */

/* WAP to reverse a string using while loop */

#include<bits/stdc++.h>

using namespace std;

void reverse(string& str)
{
    int i, n;

    n=str.length();
    for(i=0;i<n/2;i++)
        swap(str[i],str[n-1-i]);
}


int main(){
    string str;
    cout << "\nEnter a string: " ;
    cin >> str;


    cout << "\nString Before Reverse: " << str;

    reverse(str);

    cout << "\nString After Reverse:  " << str;

    return 0;
}


/* Time Complexity = O(n)  n = no of elements

    Space Complexity =  O(1) */
