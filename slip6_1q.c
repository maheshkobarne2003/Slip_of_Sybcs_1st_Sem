#include<stdio.h>

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void selectionsort(int a[],int n)
{
	int i,j,index,temp,min;
	for(i=0;i<n;i++)
	{
		min=a[i];
		index=i;
		
	   for(j=i+1;j<n;j++)
	     {
	     	if(a[j]<min)
	     	  {
	     	  	min=a[j];
	     	  	index=j;
			   }
		 }
	
	    temp=a[i];
	    a[i]=a[index];
	    a[index]=temp;
	
	}
}

int main()
{
	int a[100],n,i;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	printf("\nunsorted array");
    display(a,n);
    printf("\n sorted array");
    selectionsort(a,n);
    display(a,n);
}
