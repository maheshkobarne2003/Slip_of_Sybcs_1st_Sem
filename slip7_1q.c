#include<stdio.h>

void disp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int partition(int a[],int low,int high)
{
	int pivot=a[low],temp;
	int i=low;
	int j=high;
	while(i<j)
  {
  
	
	while(a[i]<=pivot)
	  {
	  	i++;
	  }
	  
	  while(a[j]>pivot)
	  {
	  	j--;
	  }
	  
	  if(i<j)
	  {
	  	temp=a[i];
	  	a[i]=a[j];
	  	a[j]=temp;
	  }
  }
     temp=a[low];
     a[low]=a[j];
     a[j]=temp;
     return j;
}

void mergesort(int a[],int low,int high)
{
	int m;
	if(low<high)
	{
		m=partition(a,low,high);
		mergesort(a,low,m-1);
		mergesort(a,m+1,high);
	}
}

int main()
{
	int a[100],n,i;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {
	  	a[i]=rand()%100;
	  }
	printf("\n before sorting array");
	disp(a,n);
	printf("\n after sorting");
	mergesort(a,0,n-1);
	disp(a,n);
}

