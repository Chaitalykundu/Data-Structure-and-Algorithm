#include<iostream>

using namespace std;

int traverse(int a[], int n){
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    return 0;
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    traverse(a,n);
}