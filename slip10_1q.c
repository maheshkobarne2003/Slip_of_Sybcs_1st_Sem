#include<stdio.h>
#define MAX 10

struct queue
{
	int a[MAX];
	int front,rear;
}q;

void init()
{
	q.front=-1;
	q.rear=-1;
}

int isempty()
{
	if(q.front==-1||q.front>q.rear)
	     return 1;
	else 
	    return 0;
}

int isfull()
{
	if(q.rear==MAX-1)
	     return 1;
	else 
	     return 0;
}

void insert(int num)
{
	if(isfull())
	  {
	  	printf("queue is full");
	  	
	  }
	  else
	  {
	  	if(q.front==-1)
	  	   q.front=0;
	  	 
	  	    q.rear++;
		   q.a[q.rear]=num;
		     
	  }
}

void delete()
{
	int val;
	if(isempty())
	 printf("queue is empty");
	 else
	 {
	 	val=q.a[q.front];
	 	q.front++;
	 	printf("%d\t",val);
	 }
}

void disp()
{  
  int i;
  for(i=q.front;i<=q.rear;i++)
     {
     	printf("%d\t",q.a[i]);
	}	
}

int peek()
{
	return q.a[q.front];
}

int main()
{
	int num,ch;
	init();
	do{
		printf("\n 1- insert \n 2- delete \n 3-peek \n 4-display");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number:");
					scanf("%d",&num);
					insert(num);	
					break;	
			case 2: delete();
			        break;
			case 3: printf("top most elemnet=%d",peek());
			        break;
			case 4: disp();
					break;
			default: printf("invalid choice");
						break;
					}
		
	}while(ch<5);
	
}
