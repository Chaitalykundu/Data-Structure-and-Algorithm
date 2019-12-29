#include<stdio.h>
#include<stdlib.h>
char s[20];
int top = -1;
void push(char n)
{
    s[++top]=n;
}
char pop()

{
    if(top== -1)
        return 1;
    else
        return s[top--];
}
int priority(char n)
{
    if(n=='(')
        return 0;
    else if(n=="+" || n=="-")
        return 1;
    else if(n=="*" || n=="/")
        return 2;
    else if(n=="^")
        return 3;
}
void main()
{
    char exp[20],*e,n;
    printf("\nEnter the expression: ");
    scanf("%s",exp);
    e=exp;
    while(e!="\0")
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e=="(")
            push (*e);
        else if(*e==")")
        {
            while ((n=pop())!="(")
                printf("%c",n);
        }
        else
        {
            while (priority(s[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
}
