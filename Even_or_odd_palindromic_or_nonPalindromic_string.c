#include<stdio.h>
#include<string.h>

int OddEven(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        ;
    return i;
}

int palindrome(char str[])
{
    int n = OddEven(str);
    int i,c=0;
    for(i=0;i<n/2;i++)
    {
    	if(str[i]!=str[n-i-1])
        {
            return 0;
            break;
        }
 	}
     return 1;
}

int main()
{
    char str[1000];
    scanf("%s", str);
    int n = OddEven(str);
    int s = palindrome(str);

    if(n%2==0)
    {
        if(s)
            printf("Even Palindromic");
        else
            printf("Even Non-Palindromic");
    }
    else
    {
        if(s)
            printf("Odd Palindromic");
        else
            printf("Odd Non-Palindromic");
    }
    return 0;
}