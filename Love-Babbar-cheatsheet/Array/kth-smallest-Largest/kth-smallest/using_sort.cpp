/* Author : Chaitaly Kundu
   Date : 26-08-2021*/

#include<bits/stdc++.h>
using namespace std;

int small(int a[], int n, int k)
{
    sort(a,a+n);
    return(a[k-1]);
}

int main(){

    int n=5,k;
    int a[n]={4,6,8,2,3};
    cout << small(a,n,2);
    return 0;
}