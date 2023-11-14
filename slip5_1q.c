#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
      }
}

void linearsearch(int a[],int n,int num)
{ 
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
             break;
    }
        if(i==n)
          printf("number is not found");
        else
           printf("number is found at position=%d",i);


}

int main()
{
    int a[100],n,num,i;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("display array=");
    display(a,n);
    printf("\nenter number to serach:");
    scanf("%d",&num);
    linearsearch(a,n,num);
}
