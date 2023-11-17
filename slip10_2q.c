#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
	char ename[20];
	int age;
	int sal;
}e1[100],t;

void bubblesort(struct emp e1[100],int n)
{
	int pass,i;
	for(pass=1;pass<n;pass++)
	   {
	   	  for(i=0;i<n-pass;i++)
	   	    {
	   	    	if(strcmp(e1[i].ename,e1[i+1].ename)>0)
	   	    	     {
	   	    	     	t=e1[i];
	   	    	     	e1[i]=e1[i+1];
	   	    	     	e1[i+1]=t;
						}
	   	      	 
			}
	   }
	   printf("\n buublesort");
	   for(i=0;i<n;i++)
	   {
	   	printf("\n%s\n%d\n%d",e1[i].ename,e1[i].sal,e1[i].age);
	   }
}

void seletionsort(struct emp e1[100],int n)
{
	int i,j,index;
	char min[20];
	for(i=0;i<n;i++)
      {
      	strcpy(min,e1[i].ename);
      	index=i;
      	
      	for(j=1;j<n;j++)
      	  {
      	  	if(strcmp(e1[j].ename,min)<0)
      	  	   {
      	  	   	  strcpy(min,e1[j].ename);
      	  	   	  index=j;
				}
			}
			t=e1[i];
			e1[i]=e1[index];
			e1[index]=t;
	  }
	  printf("\n selectionsort:");
	   for(i=0;i<n;i++)
	   {
	   	printf("\n%s\n%d\n%d",e1[i].ename,e1[i].sal,e1[i].age);
	   }
}

int main()
{
	FILE *fp1;
	int i=0,n;
	fp1=fopen("employee.txt","r");
	if(fp1==NULL)
	 {
	 	printf("file not found");
	 	exit(0);
	 }
	  while(!feof(fp1))
        {
            fscanf(fp1,"\n%s\n %d\n %d",e1[i].ename,&e1[i].sal,&e1[i].age);
            i++;
          }
            n=i-1;
            bubblesort(e1,n);
            seletionsort(e1,n);
            fclose(fp1);
}

