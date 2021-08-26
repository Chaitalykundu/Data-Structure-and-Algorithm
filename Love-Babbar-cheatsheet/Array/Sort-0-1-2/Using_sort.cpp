#include<bits/stdc++.h>
using namespace std;

void sort123(int a[], int n)
{
    sort(a,a+n);
}

int main(){

    int n=5;
    int a[n]={0,2,1,2,0};
    sort123(a,n);

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}