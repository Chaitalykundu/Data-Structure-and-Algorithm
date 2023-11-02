/* Author : Chaitaly Kundu
   Date : 27-03-2021 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[10],n,i;
	// No. of Elements
	cin >> n ;
	
	// Array Elements
	for(i=0;i<n;i++)
	{
	    cin >> a[i] ;
	}
	
	// Traversing
	for(i=0;i<n;i++)
	{
	    cout << a[i] << " element is in " << i << " index and address is " << &a[i] << endl;
	}
	return 0;
}
