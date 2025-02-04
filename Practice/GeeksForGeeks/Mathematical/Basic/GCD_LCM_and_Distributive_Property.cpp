/* Author : Chaitaly Kundu
   Date : 12-07-2021*/

/* Question Title : GCD, LCM and Distributive Property
   Link :   https://practice.geeksforgeeks.org/problems/gcd-lcm-and-distributive-property4419/1/?category[]=Mathematical&category[]=Mathematical&problemStatus=unsolved&problemType=functional&difficulty[]=-1&page=2&sortBy=submissions&query=category[]MathematicalproblemStatusunsolvedproblemTypefunctionaldifficulty[]-1page2sortBysubmissionscategory[]Mathematical#
*/

                            // INCOMPLETE
                            

#include<iostream>
using namespace std;

long long GCD(int a, int b)
{
    if(a>b)
        swap(a,b);
    int gcd=1;
    for(int i=a ; i>=1 ; i--)
    {
        if(a % i ==0 && b%i==0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}

    long long LCM(int a, int b)
    {
        if(a>b)
            swap(a,b);
        long long lcm=1;
        for(int i=2; i<=a; i++)
        {
            while(a%i==0 && b%i==0)
            {
                lcm = lcm * i;
                break;
            }
        }
        return lcm;
    }

    long long findValue(int x, int y, int z) { 
        //complete the function here
        
        long long xylcm = LCM(x,y);
        cout << xylcm << endl;
        long long yzlcm = LCM(y,z);
        cout << yzlcm << endl;
        return GCD(xylcm, yzlcm);
    }

int main(){

    int x , y , z;
    cout << "Enter the numbers : " ;
    cin >> x >> y >> z;

    cout << findValue(x,y,z) << endl;
    return 0;
}