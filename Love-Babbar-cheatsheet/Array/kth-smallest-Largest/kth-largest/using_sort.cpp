/* Author : Chaitaly Kundu
   Date : 26-08-2021*/

#include<bits/stdc++.h>
using namespace std;

int largest(int a[], int n, int k)
{
    sort(a,a+n);
    return(a[n-k]);
}

int main(){

    int n=5,k;
    int a[n]={4,6,8,2,3};
    cout << largest(a,n,2);
    return 0;
}