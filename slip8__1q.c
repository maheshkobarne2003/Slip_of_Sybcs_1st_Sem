#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;

node *create(node *list)
{
	node *newnode,*temp;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	 	newnode=(node *)malloc(sizeof(node));
	 	printf("enter value:");
	 	scanf("%d",&newnode->data);
	 	newnode->next=NULL;
	 	
	 	if(list==NULL)
	 	{
	 		list=temp=newnode;
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

node *deletenumber(node *list,int num)
{
	node *temp,*temp1;
	if(list->data==num)
	{
		temp=list;
		list=list->next;
		printf("number deleted=%d",temp->data);
		free(temp);
		return list;
	}
	else
	{
		for(temp1=list;temp1!=NULL;temp1=temp1->next)
		 {
		 	if(temp1->data==num)
		 	    break;
		 }
		for(temp=list;temp->next!=temp1;temp=temp->next);
		     temp->next=temp1->next;
		     printf("number deleted=%d",temp1->data);
		     free(temp1);
		     return list;
		     
		      
	}
	
}

int main()
{
	node *list=NULL;
	int num,ch;
	do{
		printf("\n 1- create \n 2-display \n 3-deletenumber:");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
					break;
			case 2: display(list);
					break;
			case 3: printf("enter number to delete");
					scanf("%d",&num);
					list=deletenumber(list,num);
					break;
			default: printf("invalid choice");
						break;
		}
		
	}while(ch<4);
}
