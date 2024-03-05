// Find minimum and maximum element in an array


#include<iostream>
#include<algorithm>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a, a + n);
    long long first = a[0];
    long long last = a[n - 1];
    return {first, last};
}


int main()
{
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair <long long, long long> ans = getMinMax(a, n);
    cout << ans.first << " " << ans.second << endl;
}