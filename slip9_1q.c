#include<stdio.h>
#include<Stdlib.h>
#include<ctype.h>
#define MAX 100
struct stack
{
	char a[MAX];
	int top;
}s;

void init()
{
	s.top==-1;
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
 	char val;
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
 
 int priority(char ch)
 {
 	if(ch=='(')
 	   return 0;
 	if(ch=='+'||ch=='-')
 	   return 1;
 	if(ch=='*'||ch=='/')
 	   return 2;
 	if(ch=='$'||ch=='^'||ch=='|')
 	   return 3;
 	   return 0;
 }
 
 int main()
 {
 	int i;
 	char s1[100],ch;
 	init();
 	printf("enter infix expression:");
 	gets(s1);
 	for(i=0;s1[i]!='\0';i++)
 	  {
 	  	if(isalpha(s1[i]))
 	  	    printf("%c",s1[i]);
 	  	else if(s1[i]=='(')
 	  	    push(s1[i]);
 	  	else if(s1[i]==')')
 	  	    {
 	  	     	while(ch=pop()!='(')
 	  	     	{
 	  	     		printf("%c",ch);
				}
			}
			else
			{
				while(priority(s.a[s.top])>=priority(s1[i]))
				  {
				  	printf("%c",pop());
				  }
				  push(s1[i]);
			}
	   }
	   while(!isempty())
	   {
	   	printf("%c",pop());
	   }
 }
