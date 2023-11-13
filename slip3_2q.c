#include<stdio.h>
#include<stdlib.h>
#define MAX 50
struct stack
{
	char a[MAX];
	char top;
}s;

void init()
{
	s.top=-1;
}

int isfull()
{
	if(s.top==MAX-1)
	   return 1;
	else
	   return 0;
}

int isempty()
{
	if(s.top==-1)
	   return 1;
	else
	   return 0;
}

void push(char ch)
{
	if(isfull())
	{
		printf("stack is full");
	}
	else
	{
		s.top++;
		s.a[s.top]=ch;
		
	}
}

char pop()
{
	char a;
	if(isempty())
	   {
	   	printf("stack is empty");
	   }
	else
	{
		a=s.a[s.top];
		s.top--;
		return a;
	}
}

void display()
{
	int i;
	for(i=s.top;i>=0;i++)
	{
		printf("%s",s.a[i]);
	}
}

int main()
{
	char s1[100];
	int i,p,q,r,s,result,val1,val2;
	printf("enter postfix expression:");
	gets(s1);
	printf("enter p,q,r,s values:");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	init();
	for(i=0;s1[i]!='\0';i++)
	{
		if(isalpha(s1[i]))
		{
		
		  
		  	switch(s1[i])
		  	{
		  		case 'p': push(p);
		  		          break;
		  	    case 'q': push(q);
		  		          break;
		  		case 'r': push(r);
		  		          break;
		  		case 's': push(s);
		  		          break;
			}
			
		}
		else
		{
		    val1=pop();
			val2=pop();
			switch(s1[i])
			{
			   case '+': result=val2+val1;
			   				break;
			    case '-': result=val2-val1;
			   				break;
			   	case '*': result=val2*val1;
			   				break;
			    case '/': result=val2/val1;
			   				break;
			}	
			push(result);	
		}
	}
	printf("\n result=%d",pop());
}






