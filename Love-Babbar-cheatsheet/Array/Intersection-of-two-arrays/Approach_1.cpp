/* Author : Chaitaly Kundu
   Date : 02-09-2021*/

#include<iostream>
#include<algorithm>

using namespace std;


class sol {
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int res[n+m], c=0;
        for(int i=0;i<n;i++)
            res[i] = a[i];

        for(int i=0;i<m;i++)
            res[n+i] = b[i];

        sort(res,res+n+m);

        for(int i=0;i<n+m-1;i++)
        {
            if(res[i]==res[i+1])
                c++;
        }
        return c;
    }
};


int main(){

    int n=5, m=5;
    int a[n] = {1,5,3,7,9};
    int b[m] = {1,2,3,4,5};

    sol obj;
    cout << obj.doUnion(a,n,b,m);


    return 0;
}