#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE*ptr;
	int en;
	char name[20];
	char dept[20];
	int i,n;
	ptr=fopen("db.txt","w+");
	fprintf(ptr,"SR.NO\t\tNAME\t\t\tDEPARTMENT\t\tENROLL.NO\n");
	printf("Enter no of entrys=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter Name:");
		scanf("%s",&name);
		printf("Enter enroll:");
		scanf("%d",&en);
		printf("Enter departrment:");
		scanf("%s",&dept);
		fprintf(ptr,"%d\t\t%s\t\t%s\t\t%d\n",i,name,dept,en);
	}
	fclose(ptr);
}
