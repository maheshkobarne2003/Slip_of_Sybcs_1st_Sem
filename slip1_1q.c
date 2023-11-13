#include<stdio.h>
#include<stdlib.h>

struct node
 {
 	int data;
 	struct node *next,*prev;
 };
 
 struct node *create( struct node *list)
 {
 	int i,n;
    struct node *newnode,*temp;
 	printf("enter limit");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 	  newnode=(struct node *)malloc(sizeof(struct node));	
	  printf("enter value:");
	  scanf("%d",&newnode->data);
	  newnode->next=NULL;
	  
	  if(list==NULL)
	  {
	  	list=newnode;
	  	temp=newnode;
	   } 
	   else
	   {
	   	  temp->next=newnode;
	   	  newnode->prev=temp;
	   	  temp=newnode;
	   }
	}
	return list;
 }
 
 
 void display( struct node *list)
 {
   struct node *temp;
 	for(temp=list;temp!=NULL;temp=temp->next)
 	{
 		printf("%d\t",temp->data);
	 }
 }
//#include<stdio.h>
//#include"doublylist.h"

int main()
{
	int ch;
	struct node *list=NULL;
	do{
		printf("\n 1-create node \n 2-display ");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: list=create(list);
					break;
			case 2: display(list);
					break;
			default: printf("invalid choice");
					 break;
		}
		
	}while(ch<3);
}
