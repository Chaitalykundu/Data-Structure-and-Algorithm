/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
#include<algorithm>
using namespace std;

class sol {
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int c=0;
        for(int i=0;i<n;i++)
        {
            c++;
        }
        for(int j=0;j<m;j++)
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==b[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
                c++;
        }
        return c;
    }
};

int main(){

    int n=5, m=5;
    int a[n] = {1,2,3,7,9};
    int b[m] = {1,2,3,4,5};

    sol obj;
    cout << obj.doUnion(a,n,b,m);

    return 0;
}