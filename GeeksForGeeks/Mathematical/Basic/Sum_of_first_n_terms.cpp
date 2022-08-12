/* Author : Chaitaly Kundu
   Date : 12-07-2021*/

/* Question Title : Sum of first n terms
   Link :   https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1/?category[]=Mathematical&category[]=Mathematical&problemStatus=unsolved&problemType=functional&difficulty[]=-1&page=2&sortBy=submissions&query=category[]MathematicalproblemStatusunsolvedproblemTypefunctionaldifficulty[]-1page2sortBysubmissionscategory[]Mathematical*/

#include<iostream>
using namespace std;

long long sumOfSeries(long long N) {
    // code here
    long long int x = (N * ( N + 1 ) / 2);
    return x * x;
}

int main(){

    int n;
    cout << "Enter the number of terms : " ;
    cin >> n;

    cout << sumOfSeries(n) << endl;
    return 0;
}