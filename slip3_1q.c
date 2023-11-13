#include<stdio.h>

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];

    for(j=i-1;j>=0;j--)
       {
          if(a[j]>temp)
            
                a[j+1]=a[j];
                else
                break;
        }
         a[j+1]=temp;
    }
}

int main()
{
    int a[100],i,n;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("\n before sorted array");
    display(a,n);
    insertionsort(a,n);
    printf("\n after sorted array");
    display(a,n);
}
