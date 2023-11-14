#include<stdio.h>
#define MAX 5
struct queue
{
    int a[MAX];
    int front ,rear;
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

void enqueue(int num)
{
    if(isfull())
      {
        printf("stack is full ");
      }
      else
      {
        if(q.front==-1)
        {
            q.front=0;
        }

        q.rear++;
        q.a[q.rear]=num;
      }
}

void display()
{
    int i;
    for(i=q.front;i<=q.rear;i++)
       {
        printf("%d\t",q.a[i]);
       }
}

void reverse()
{
    int i;
    for(i=q.rear;i>=q.front;i--)
     {
        printf("%d\t",q.a[i]);
     }
}

int main()
{
    int num,n,i;
    init();
    printf("enter limit:");
    scanf("%d",&n);
    printf("enter number to insert:");
    for(i=0;i<n;i++)
      {
        scanf("%d",&num);
        enqueue(num);
      }

      printf("\n display");
      display();
      printf("\nreverse queue:");
      reverse();
}
