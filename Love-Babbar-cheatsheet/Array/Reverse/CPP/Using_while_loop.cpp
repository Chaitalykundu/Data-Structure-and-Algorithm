/* Author : Chaitaly Kundu
   Date: 09-04-2021 */

/* WAP to reverse an array using while loop */

#include<iostream>

using namespace std;

void reverse(int a[], int start, int end)
{
    int temp;
    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

void PrintArray(int a[], int n){
    int i;

    for(i=0;i<n;i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    int n,i;
    cout << "\nEnter the no of elements: " ;
    cin >> n;

    int a[n];

    cout << "\nEnter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "\nArray Before Reverse: ";
    PrintArray(a,n);

    reverse(a,0,n-1);

    cout << "\nArray After Reverse: ";
    PrintArray(a,n);
    return 0;
}
