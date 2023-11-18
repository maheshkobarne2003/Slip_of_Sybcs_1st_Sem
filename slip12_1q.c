#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp1;
	int std ,flag=0;
	char cname[20],s1[20];
	fp1=fopen("cities.txt","r");
	if(fp1==NULL)
	  {
	  	printf("file not found");
	  	exit(0);
	  }
	  printf("enter city name to serach:");
	  scanf("%s",&s1);
	  	  while(!feof(fp1))
	  {
	  	fscanf(fp1,"%s%d",&cname,&std);
	  	if(strcmp(cname,s1)==0)
	  	{
	  		flag=1;
	  		break;
		  }
	  }
	  fclose(fp1);
	  if(flag==1)
	  printf("std code=%d",std);
	  else
	    printf("not found");
}
