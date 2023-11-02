/* Author : Chaitaly Kundu
   Date : 05-09-2021*/

#include<iostream>
using namespace std;

class sum
{
public:
    void sum_subarray(int a[], int n)
    {
        for(int i=0;i<n;i++)
        {
            int current_sum = 0;
            for(int j=i;j<n;j++)
            {
                current_sum +=a[j];
                cout << "sum of subarray from index " << i << " to index " << j << " is " << current_sum << endl;
            }
        }
    }
};

int main(){

    int n = 5;
    int a[n] = {1,4,3,2,5};

    sum obj;
    obj.sum_subarray(a,n);

    return 0;
}