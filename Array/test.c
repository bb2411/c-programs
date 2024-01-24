#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter no of entry");
	scanf("%d",&a);
	int marks[a];
	int i;
	for(i=0;i<=a-1;i++)
	{
		printf("enter marks=");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=a-1;i++)
	{
		printf("\n\n marks of %d=%d\n",i,marks[i]);
	}
	getch();
}
