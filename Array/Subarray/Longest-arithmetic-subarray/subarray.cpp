/* Author : Chaitaly Kundu
   Date : 05-09-2021*/


// Arithmetic subarray = diff btw elements is same

#include<iostream>
#include<algorithm>

using namespace std;

int subarray(int a[], int n)
{
    int diff = a[0] - a[1];
    int len = 1, maxi=1;
    for(int i=1;i<n-1;i++)
    {
        if((a[i]-a[i+1]) == diff)
            len++;
        else{
            diff = a[i] - a[i+1];
            len = 1;
        }
        maxi = max(len,maxi);
    }
    return (maxi+1);
}

int main(){

    int n = 5;
    int a[n] = {2,3,4,6,8};

    int res = subarray(a,n);
    cout << res << endl;

    return 0;
}