#include<stdio.h>
#include<stdlib.h>
   struct node 
{
	int data;
	struct node *next;
};

struct node *newnode,*front,*rear;

void init()
{
	front=rear=NULL;
}

int isempty()
{
	if(front==NULL)
	   return 1;
	else
	   return 0;
}

void display()
{
	struct node *temp;
	for(temp=front;temp!=NULL;temp=temp->next)
	  {
	  	printf("%d\t",temp->data);
	  }
}

void enqueue(int num)
{
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}

void dequeue()
{
	 struct node *temp;
	if(isempty())
	{
		printf("queue is overflow");
	}
	else
	{
		temp=front;
		printf("%d",front->data);
		front=front->next;
		free(temp);
	}
}

int peek()
{
	return front->data;
}

//#include<stdio.h>
//#include"dyqueue.h"


int main()

{
	int ch,num;
	init();
	do{
		printf("\n 1- insert  \n2-delete number \n3-display \n 4-peek(top):");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number");
					scanf("%d",&num);
					enqueue(num);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: printf("top element=%d",peek());
					break;
			default: printf("invalid choice");
						break;
		}
			}while(ch<5);
}
