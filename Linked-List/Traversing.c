/* Author : Chaitaly Kundu
   Date: 05-04-2021 */

/* WAP to count the nodes of a linked list */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count;
    struct node *head;
    if(head==NULL)
        printf("Linked List is empty");

    struct node *p = NULL;
    p=head;
    while(p!=NULL)
    {
        count++;
        p = p->link;
    }
    printf("Number of nodes = %d",count);
}
