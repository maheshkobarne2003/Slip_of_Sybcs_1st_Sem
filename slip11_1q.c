#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cities
{
	char cname[20];
	int std;
}c1[100];

void sentinel(struct cities c1[100],int n)
{
	char key[20],last[20];
	int i=0;
	printf("enter city name to search:");
	scanf("%s",&key);
	strcpy(last,c1[n-1].cname);
	strcpy(c1[n-1].cname,key);
	while(strcmp(c1[i].cname,key)!=0)
	{
		i++;
	}
	if(i<n-1||strcmp(key,last)==0)
	  printf("found and std code is=%d",c1[i].std);
	  else
	  printf("not found");	
}

int main()
{
	FILE *fp1;
	int i=0,n;
	fp1=fopen("cities.txt","r");
	if(fp1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(fp1))
	{
		fscanf(fp1,"%s%d",&c1[i].cname,&c1[i].std);
		i++;
	}
	n=i-1;
	sentinel(c1,n);
	fclose(fp1);
	
}
