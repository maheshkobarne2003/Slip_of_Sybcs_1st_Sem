#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front,*rear;

void init()
{
	rear=front=NULL;
}

int isempty()
{
	if(rear==NULL&&front==NULL)
	    return 1;
	else
	    return 0;
}

void disp()
{
	struct node *temp;
	temp=front;
	do  
	{
	  	printf("%d\t",temp->data);
	  	temp=temp->next;
	}while(temp!=front);
	  
}

void addelement(int num)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	if(rear==NULL)
	  {
	  	front=rear=newnode;
	  	rear->next=front;
	  }
	  else
	  {
	  	rear->next=newnode;
	  	rear=newnode;
	  	rear->next=front;
	  }
}

void delete()
{
	struct node *temp;
	temp=front;
	
	if(isempty())
	{
		printf("\n queue underflow");
	}
	else if(front==rear)
	{
	    front=rear=NULL;
	    printf("deleted value=%d",temp->data);
		free(temp);	
	}
	else
	{
		front=front->next;
		rear->next=front;
		printf("deleted value=%d",temp->data);
		free(temp);
	}
}

int peek()
{
	return front->data;
}

int main()
{
	int ch,num;
	init();
	do{
		printf("\n 1- add element \n 2- delete element \n 3- check queue empty or not \n 4- display \n 5-peek");
		printf("\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		   case 1: printf("enter number:");
		   		    scanf("%d",&num);
			    	addelement(num);
					break;
			case 2: delete();
					break;
			case 3: if(isempty())
			          printf("queue is empty");
			        else
			          printf("queue is not empty");
			        break;
			case 4: disp();
					break;
			case 5: printf("\n element at peek=%d",peek());
			         break;
			default : printf("invalid choice");
			         break;
		}	
	}while(ch<6);
}
