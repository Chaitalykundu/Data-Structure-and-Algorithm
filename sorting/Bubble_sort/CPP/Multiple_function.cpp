#include <iostream>
using namespace std;

int bubble_sort(int [],int ); // bubble_sort function declaration
int swap(int [], int);
int print_elements(int [], int);


int swap(int a[], int j)
{
    int temp;
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}

int bubble_sort(int b[], int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                swap(b,j);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}


int print_elements(int c[], int n)
{
    int e;
    for(e=0;e<n;e++)
    {
        cout << "\t" << c[e];
    }
    cout << endl;
}

int main() {
	// your code goes here
	 int n,i;
    cout << "Enter the no of elements: " << endl;
    cin >> n;
    
    int a[n];
    
    cout << "Elements are: " << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    cout << "Before Sorting: ";
    print_elements(a,n);
    
    bubble_sort(a,n);
    
    cout << "After Sorting: ";
    print_elements(a,n);
	return 0;
}
