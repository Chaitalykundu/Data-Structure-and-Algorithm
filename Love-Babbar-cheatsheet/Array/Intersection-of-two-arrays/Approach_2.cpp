/* Author : Chaitaly Kundu
   Date : 01-09-2021*/


// for sorted array

#include<iostream>
#include<algorithm>
using namespace std;

class sol {
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0, j=0, c=0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
                c++;
            if(a[i]<b[j])
                i++;
            else if(a[i]> b[j])
                j++;
        }
        return c;
    }
};

int main(){

    int a[] = {1,2,3,4,5,99,88};
    int b[] = {1,2,3,4,5,6,7,8,9};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    sol obj;
    cout << obj.doUnion(a,n,b,m);

    return 0;
}