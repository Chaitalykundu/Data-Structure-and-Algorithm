/* Author : Chaitaly Kundu
   Date: 09-04-2021 */

/* WAP to reverse a string using while loop */

#include<bits/stdc++.h>

using namespace std;

void reverse(string& s, int start, int end)
{
    int temp;
    while(start<end)
    {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}


int main(){
    string s;
    cout << "\nEnter a string: " ;
    cin >> s;

    int n = s.length();


    cout << "\nString Before Reverse: " << s;

    reverse(s,0,n-1);

    cout << "\nString After Reverse:  " << s ;

    return 0;
}


/* Time Complexity = O(n)  n = no of elements

    Space Complexity =  O(1) */
