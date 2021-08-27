/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
using namespace std;

class By_traversing_mid_value
{
public:
    void sort01(int a[], int n)
    {
        int l=0, h=n-1,m=0;

        while(m<=h)
        {
            switch(a[m])
            {
                case 0:
                    m++;
                    break;
                case 1:
                    swap(a[m],a[h--]);
                    break;
            }
        }
    }
};


int main(){

    int n=10;
    int a[n] = {0,1,0,0,1,1,1,0,1,0};

    By_traversing_mid_value obj;
    obj.sort01(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    return 0;
}