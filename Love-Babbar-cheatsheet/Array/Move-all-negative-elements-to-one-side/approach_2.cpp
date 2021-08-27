/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
using namespace std;

class sol
{
    public:
        void move_neg(int arr[], int n)
        {
            int j = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] < 0) {
                    if (i != j)
                        swap(arr[i], arr[j]);
                    j++;
                }
            }
        }
};
int main(){

    int n=10;
    int a[n] = {-1,6,3,-6,-44,0,23,6,-9,-34};

    sol obj;
    obj.move_neg(a,n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}