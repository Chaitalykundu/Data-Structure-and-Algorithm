/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
using namespace std;

class sol
{
    public:
        void move_neg(int a[], int n)
        {
            for(int i=0;i<n-1;i++)
            {
                int c=0;
                for(int j=i;j<n;j++)
                {
                    if(a[j]<0)
                    {
                        swap(a[i],a[j]);
                        c++;
                        break;
                    }
                }
                if(c==0)
                    break;

            }
        }
};
int main(){

    int n=10;
    int a[n] = {-1,6,-3,-6,-44,0,23,6,-9,-34};

    sol obj;
    obj.move_neg(a,n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}