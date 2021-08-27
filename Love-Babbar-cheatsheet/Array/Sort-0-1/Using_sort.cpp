/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
#include<algorithm>

using namespace std;

class Using_sort
{
    public:
        void sort01(int a[], int n)
        {
            sort(a,a+n);
        }
};


int main(){

    int n=5;
    int a[n] = {1,0,0,1,0};

    Using_sort obj;
    obj.sort01(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    return 0;
}