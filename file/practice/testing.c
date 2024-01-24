#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,temp,temp2;
	int en;
	char comp[10]={"computer"};
	char mech[10]={"mechanical"};
	char ele[10]={"electrical"};
	char civ[10]={"civil"};
	char dept[10];
	char name[20];
	FILE*fmech;
	FILE*fele;
	FILE*fcomp;
	FILE*fciv;
	FILE*fptr;
	fciv=fopen("civ.txt","a+");
	fptr=fopen("database.txt","a+");
	fmech=fopen("mech.txt","a+");
	fele=fopen("ele.txt","a+");
	fcomp=fopen("comp.txt","a+");
	fprintf(fciv,"SR.NO\t\t\t\tNAME\t\t\t\tDEPARTMENT\t\t\t\tENROLL.NO\n");
	fprintf(fptr,"SR.NO\t\t\t\tNAME\t\t\t\tDEPARTMENT\t\t\t\tENROLL.NO\n");
	fprintf(fcomp,"SR.NO\t\t\t\tNAME\t\t\t\tDEPARTMENT\t\t\t\tENROLL.NO\n");
	fprintf(fmech,"SR.NO\t\t\t\tNAME\t\t\t\tDEPARTMENT\t\t\t\tENROLL.NO\n");
	fprintf(fele,"SR.NO\t\t\t\tNAME\t\t\t\tDEPARTMENT\t\t\t\tENROLL.NO\n");
	read:
	printf("Enter no of entry:");
	scanf("%d",&n);
	if(i>=1)
	{
		temp=temp2;
	}
	else{
		temp=0;
	}
	for(i=temp;i<=n;i++)
	{
		printf("ENTRY CODE %d\n",i);
		printf("enter name:");
		scanf("%s",&name);
		printf("enter department:");
		scanf("%s",&dept);
		printf("enter enroll no:");
		scanf("%d",&en);
		if(strcmpi(comp,dept)==0)
		{
			fprintf(fcomp,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
		}
		else if(strcmpi(mech,dept)==0)
		{
				fprintf(fmech,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
		}
		else if(strcmpi(ele,dept)==0)
		{
			fprintf(fele,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
		}
		else if(strcmpi(civ,dept)==0)
		{
			fprintf(fciv,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
		}
		else
		{
			fprintf(fptr,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
		}
		if(i==n)
		{
			temp2=i;
		}
		fprintf(fptr,"%d\t\t\t%10s\t\t\t%10s\t\t\t%d\n",i,name,dept,en);
	}
	goto read;
	fclose(fciv);
	fclose(fptr);
	fclose(fcomp);
	fclose(fmech);
	fclose(fele);
}
