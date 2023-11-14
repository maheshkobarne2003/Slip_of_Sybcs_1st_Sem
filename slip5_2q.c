#include<stdio.h>
#include<stdlib.h>
struct pqueue
{
	int a[20];
	int front,rear;
}p;

void init()
{
	p.rear=-1;
	p.front=-1;
}

int isempty()
{
	if(p.front==p.rear)
	   return 1;
	else
	   return 0;
}

int isfull()
{
	if(p.rear==19)
	  return 1;
	else 
	  return 0;
}

void add(int num)
{ 
    int i;
	if(isfull()==1)
	    printf("\n queue is full");
	else
	{
		for(i=p.rear;i>p.front;i--)
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
	if(isempty()==1)
	    {
	   printf("\n queue is empty");
	    }
	   else
	   {
	   	   p.front++;
	   	  val=p.a[p.front];
	   	      ;
	   }
	     return val;
}

void display()
{
	int i;
	for(i=p.front+1;i<=p.rear;i++)
	     {
	     	printf("%d\t",p.a[i]);	
		 }
}

int main()
{
	int ch,n;
	init();
	do{
		printf("\n 1-add element \n 2-delete element \n 3-display ");
		printf("\n enter choice:");
		scanf("%d",&ch);
		
		switch(ch)
        {
        	case 1: printf("enter number:");
        			scanf("%d",&n);
        			add(n);
        			break;
        	case 2: printf("deleted value=%d",delete());
        			break;
        	case 3:display();
        			break;
        	default: printf("invalid choice");
        			break;
						}		
	}while(ch<4);
}
