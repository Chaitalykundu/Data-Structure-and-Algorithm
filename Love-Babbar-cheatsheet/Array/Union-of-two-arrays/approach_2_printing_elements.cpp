/* Author : Chaitaly Kundu
   Date : 27-08-2021*/

#include<iostream>
using namespace std;

class sol {
    public:

    void doUnion(int arr1[], int arr2[], int m, int n)
    {
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (arr1[i] < arr2[j])
                cout << arr1[i++] << " ";
    
            else if (arr2[j] < arr1[i])
                cout << arr2[j++] << " ";
    
            else {
                cout << arr2[j++] << " ";
                i++;
            }
        }

        /* Print remaining elements of the larger array */
        while (i < m)
            cout << arr1[i++] << " ";

        while (j < n)
            cout << arr2[j++] << " ";
    }
};

int main(){


    int a[] = {1,2,3,4,5,99,88};
    int b[] = {1,2,3,4,5,6,7,8,9};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);

    sol obj;
    obj.doUnion(a,b,m,n);

    return 0;
}