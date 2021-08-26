#include<bits/stdc++.h>
using namespace std;

class Using_class_best_optimal_sol
{
    public:
        void sort123(int a[], int n)
        {
            int l=0, m=0, h=n-1;
            while(m<=h)
            {
                switch(a[m])
                {
                    case 0:
                        swap(a[l++],a[m++]);
                        break;
                    case 1:
                        m++;
                        break;
                    case 2:
                        swap(a[m],a[h--]);
                        break;
                }
            }
        }
};

int main(){

    Using_class_best_optimal_sol obj;
    int n=5;
    int a[n]={0,2,1,2,0};
    obj.sort123(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}