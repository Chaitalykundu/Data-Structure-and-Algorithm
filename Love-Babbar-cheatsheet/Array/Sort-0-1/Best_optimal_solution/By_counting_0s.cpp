/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
#include<string>
using namespace std;

class By_counting_0s
{
public:
    void sort01(int a[], int n)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                c++;
        }

        for(int i=0;i<c;i++)
            a[i]=0;
        for(int i=c;i<n;i++)
            a[i] = 1;
    }
};


int main(){

    int n=5;
    int a[n] = {1,0,0,1,0};

    By_counting_0s obj;
    obj.sort01(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}