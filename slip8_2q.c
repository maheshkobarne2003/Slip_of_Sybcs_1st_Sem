#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack
{
	int a[MAX];
	int top;
}s1,s2;

void init(struct stack *s)
{
	s->top=-1;
}

int isempty(struct stack *s)
{
	if(s->top==-1)
	    return 1;
	else
	   return 0;
}

int isfull(struct stack *s)
{
	if(s->top==MAX-1)
	   return 1;
	else
	   return 0;
}

void push(struct stack *s,int num)
{
	if(isfull(s))
	{
		printf("stack is full");
	}
	else
	{
	    s->top++;
		s->a[s->top]=num;	
	}
}

int pop(struct stack *s)
{
	int val;
	if(isempty(s))
	{
		printf("stack is empty");
	}
	else
	{
		val=s->a[s->top];
		s->top--;
	}
	return val;
}

int main()
{    
	int n1,n2,i,num;
	init(&s1);
	init(&s2);
	printf("enter limit of stack 1:");
	scanf("%d",&n1);
	printf("enter number in stack 1");
	for(i=0;i<n1;i++)
	{
		printf("\nenter value");
		scanf("%d",&num);
		push(&s1,num);
	}
	
	printf("enter limit of stack 2:");
	scanf("%d",&n2);
	printf("enter number in stack 2");
	for(i=0;i<n2;i++)
	{
		printf("\nenter value");
		scanf("%d",&num);
		push(&s2,num);
	}
	
	while(!isempty(&s1)&&!isempty(&s2))
     {
     	if(pop(&s1)!=pop(&s2))
     	   break;
	 }
	 
	 if(isempty(&s1)&&isempty(&s2))
	    printf("identical");
	else
	   printf("not identical");	
}
