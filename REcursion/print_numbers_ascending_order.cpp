/* Author : Chaitaly Kundu
   Date : 10-09-2021*/

#include<iostream>
#include<algorithm>
using namespace std;

class print_number_ascending_order
{
public:
    int print_numbers(int n)
    {
        if(n==11)
            return 0;
        cout << n << " ";
        return print_numbers(n+1);
    }
};


int main(){

    int n = 1;

    print_number_ascending_order obj;

    obj.print_numbers(n);
    cout << endl;

    return 0;
}