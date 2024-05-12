/*
Author : Chaitaly Kundu
Date :  12/05/2024

Problem name : Set Bits
Level : Easy

Problem Link : https://www.naukri.com/code360/guided-paths/data-structures-algorithms-new/content/662524/offering/10866810?dashboardRedirection=true&leftPanelTabValue=PROBLEM&customSource=studio_nav

Purpose : Learn Bit Manipulation

Topic : Bit Manipulation
Company Tag : Amazon, Google, D.E shaw
*/



#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here

int countBits(int n){

    int c =0;
    
    while(n>0){
        if(n&1)
            c++;
        n = n>>1;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}