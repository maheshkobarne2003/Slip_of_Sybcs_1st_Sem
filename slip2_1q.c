#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;

node *create(node *list)
{
	int i,n;
	node *newnode,*temp;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		printf("enter values:");
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
			temp=newnode;
		}
	}
	return list;
}

void display(node *list)
{
	node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
		
	}
}

int main()
{
	node *list=NULL;
	int ch;
	do{
	     printf("\n1-create \n2-display");
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
