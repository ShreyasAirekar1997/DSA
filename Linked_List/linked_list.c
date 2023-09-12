
#include <stdio.h>
#include "stdlib.h"

struct node{
    int data ; 
    struct  node *link ;
};

int main()
{
    
      struct node *node1 = (struct node *)malloc(sizeof(struct node));
       struct node * node2 = (struct node *)malloc(sizeof(struct node));  
       struct node  *node3 = (struct node *)malloc(sizeof(struct node)); 
       struct node *head = node1; 

           node1->data = 45; 
           node1->link = node2;
           
           node2->data = 22 ; 
           node2->link = node3; 
           
           node3->data = 41; 
           node3->link = NULL;
           
           while(head != NULL)
           {
               printf("%d",head->data);
               head = head->link ;
           }
           