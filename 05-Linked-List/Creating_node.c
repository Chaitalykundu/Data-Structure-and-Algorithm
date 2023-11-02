/* Author : Chaitaly Kundu
   Date: 07-04-2021 */

/* WAP to create a LinkedList */


#include<stdio.h>
#include<stdlib.h>

// Define datatype of a node (this part is common to all linkedlist)
struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head, *newnode, *temp;
    int n, i=0;
    head=0; //initialize head
    printf("Enter no of nodes to be created: ");
    scanf("%d",&n);

    while(i<n)
    {
        // create node
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d", &newnode -> data);

        newnode -> next=0;

        if(head==NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else{
            temp ->next = newnode;
            temp=newnode;
        }
        i++;
    }


    temp=head;
    while(temp!=NULL)
    {
        printf("\nElement is %d and Address of next node is %d\t",temp->data,temp->next);

        temp = temp -> next;
    }

    return 0;
}
