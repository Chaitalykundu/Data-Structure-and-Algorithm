/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
using namespace std;

class by_counting_0s_and_1s
{
    public:
        void sort012(int a[], int n)
        {
            int c0=0, c1=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                    c0++;
                if(a[i]==1)
                    c1++;
            }

            for(int i=0;i<c0;i++)
                a[i]=0;
            for(int i=c0;i<c0+c1;i++)
                a[i]=1;
            for(int i=c0+c1;i<n;i++)
                a[i]=2;
        }
};


int main(){

    int n=5;
    int a[5]={0,2,1,2,0};

    by_counting_0s_and_1s ob;
    ob.sort012(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}