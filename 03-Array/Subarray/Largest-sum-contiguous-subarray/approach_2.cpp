/* Author : Chaitaly Kundu
   Date : 07-09-2021*/

#include<bits/stdc++.h>
#include<algorithm>
#include<limits>

using namespace std;

class approach_2
{
public:
    long long int maxsum(int a[], int n)
    {
        long long int max_sum = INT_MIN;
        long long int sum = 0;

        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
            max_sum = max(sum,max_sum);
            if(sum<0)
                sum=0;
        }
        return max_sum;
    }

};

int main(){

    int n = 9;
    int a[n] = {-2,1,-3,4,-1,2,1,-5,4};

    approach_2 obj;
    long long int res = obj.maxsum(a,n);
    cout << res << endl;

    return 0;
}