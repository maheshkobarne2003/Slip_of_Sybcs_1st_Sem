#include<stdio.h>
#include<stdlib.h>
#define MAX 20
struct queue
{
	int a[MAX];
	int rear,front;
}p;

void init()
{
	p.rear=-1;
	p.front=-1;
}

int isempty()
{
	if(p.rear==p.front)
	    return 1;
	else
	   return 0;
}

int isfull()
{
	if(p.rear==MAX-1)
	   return 1;
	else
	   return 0;
}

void add(int num)
{
	int i;
	if(isfull())
	   printf("queue is overflow");
	   
	   else
	   {
	   	    for(i=p.rear;i>p.front;i++)
	   	      {
	   	      	if(num<p.a[i])
	   	      	    p.a[i+1]=p.a[i];
	   	      	else
	   	      	   break;
			  }
			  p.a[i+1]=num;
			  p.rear++;
	   }
}

int delete()
{
	int val;
	if(isempty())
	{
	   printf("queue is underflow");
	}
	else
	{
		p.front++;
		val=p.a[p.front];	
	}
	return val;	  
}

void disp()
{
	int i;
	for(i=p.front+1;i<=p.rear;i++)
	{
		printf("\t%d",p.a[i]);	
	}
}

int main()
{
	int num,ch;
	init();
	do{
		printf("\n 1-add \n 2-delete \n 3-display");
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number");
			        scanf("%d",&num);
			        add(num);
			        break;
			case 2: printf("deleted value=%d",delete());
					break;
			case 3: disp();
					break;
			default: printf("invalid choice");
						break;
		}
		
		
	}while(ch<4);
}
