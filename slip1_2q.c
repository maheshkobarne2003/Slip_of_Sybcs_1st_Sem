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

node *bubblesort(node *list)
{
	int temp;
	node *i,*j;
	for(i=list;i!=NULL;i=i->next)
	   {
	   for(j=i->next;j!=NULL;j=j->next)
	   	    {
	   	       	if(i->data>j->data)
	   	       	{
	   	       	    temp=i->data;
	   	       	    i->data=j->data;
	   	       	    j->data=temp;
				}
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
     list=create(list);
   	 display(list);
   	 printf("\n\n sorted list:");
   	 list=bubblesort(list);
   	 display(list);	
}
