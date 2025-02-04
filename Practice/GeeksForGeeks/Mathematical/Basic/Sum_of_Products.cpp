/* Author : Chaitaly Kundu
   Date : 12-07-2021*/

/* Question Title : Sum of first n terms
   Link :   https://practice.geeksforgeeks.org/problems/sum-of-first

*/

// Time Complexity = O(n^2)         ........... Need optimal solution

#include<iostream>
using namespace std;

long long pairAndSum(int N, long long Arr[]) {
        // code here
        
        long long int sum = 0, pair;
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                pair = Arr[i] & Arr[j];
                sum = sum + pair;
            }
        }
        return sum;
    }

int main(){

    long long n;
    cout << "Enter the number of elements : " ;
    cin >> n;

    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << pairAndSum(n,arr) << endl;

    return 0;
}