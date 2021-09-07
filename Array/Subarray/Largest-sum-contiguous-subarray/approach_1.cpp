/* Author : Chaitaly Kundu
   Date : 07-09-2021*/

#include<iostream>
#include<limits>

using namespace std;

class approach_1
{
public:
    long long int maxsum(int a[], int n)
    {
        long long int max_sum = -123;
        for(int i=0;i<n;i++)
        {
            long long int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum = sum + a[j];
                max_sum = max(sum,max_sum);
            }
        }
        return max_sum;
    }

};

int main(){

    int n = 9;
    int a[n] = {-2,1,-3,4,-1,2,1,-5,4};

    approach_1 obj;
    long long int res = obj.maxsum(a,n);
    cout << res << endl;

    return 0;
}