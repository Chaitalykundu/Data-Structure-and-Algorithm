/* Author : Chaitaly Kundu
   Date : 04-09-2021*/

#include<iostream>
using namespace std;

int subarray(int a[], int n)
{
    int current = 0, max_till_now = 0;
    for(int i=0;i<n-1;i++)
    {
        current+=a[i];
        max_till_now = max(max_till_now,current);

        if(current<0)
            current = 0;
    }
    return max_till_now;
}

int main(){

    int n=8;
    int a[n] = {1,-4,3,-7,6,4,-3,2};

   // int sum = subarray(a,n);
    cout << subarray(a,n) << endl;
    return 0;
}