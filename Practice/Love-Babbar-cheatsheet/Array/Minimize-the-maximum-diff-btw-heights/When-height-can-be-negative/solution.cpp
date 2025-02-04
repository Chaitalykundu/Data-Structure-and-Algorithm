/* Author : Chaitaly Kundu
   Date : 08-09-2021*/

#include<iostream>
#include<algorithm>
using namespace std;

class solution
{
public:
    int min_height(int a[], int n, int k)
    {
        sort(a,a+n);
        int smallest = a[0]+k;
        int largest = a[n-1]-k;
        int mi, ma, ans = a[n-1]-a[0];

        for(int i=0;i<n-1;i++)
        {
            mi = min(smallest,a[i+1]+k);
            ma = max(largest,a[i]-k);

            ans = min(ans, ma-mi);
        }
        return ans;
    }
};


int main(){

    int n = 5;
    int a[n] = {3, 4, 5, 6, 7};
    int k=3;
    solution obj;

    int res = obj.min_height(a,n,k);
    cout << res << endl;
    
    return 0;
}