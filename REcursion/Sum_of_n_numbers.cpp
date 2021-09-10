/* Author : Chaitaly Kundu
   Date : 08-09-2021*/

#include<iostream>
#include<algorithm>
using namespace std;

class Sum_of_n_numbers
{
public:
    int sumOf(int n)
    {
        if(n==1)
            return 1;
        return (n+sumOf(n-1));
    }
};


int main(){

    int n = 100;
    
    Sum_of_n_numbers obj;

    int sum = obj.sumOf(n);
    cout << sum << endl;
    
    return 0;
}