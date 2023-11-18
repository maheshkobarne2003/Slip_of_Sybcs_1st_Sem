#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack
{
	int a[MAX];
	int top;
}s;

void init()
{
	s.top=-1;
}

int isempty()
{
	if(s.top==-1)
	    return 1;
	else
	    return 0;
}

int isfull()
{
	if(s.top==MAX-1)
	   return 1;
	else
	   return 0;
}

void push(int num)
{
	if(isfull())
	   {
	   	 printf("stack is full");
	   }
	else
	{
		s.top++;
		s.a[s.top]=num;
	}
}

int pop()
{
	int val;
	if(isempty())
	  {
	  	printf("stack is empty");
	  }
	  else
	  {
	  	val=s.a[s.top];
	  	s.top--;
	  	return val;
	  }
}

int peek()
{
	return s.a[s.top];
}

void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	   {
	   	printf("%d\t",s.a[i]);
	   }
}

int main()
{
	int ch,num;
	init();
	do{
		printf("\n 1- push number \n 2-pop number \n 3- top element \n 4-display");
		printf("\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number:");
					scanf("%d",&num);
					push(num);
					break;
			case 2: printf("deleted number=%d",pop());
					break;
			case 3: printf("top most element=%d",peek());
					break;
			case 4: disp();
			        break;
			default: printf("invalid choice");
						break;
		}
		
	}while(ch<5);
}
