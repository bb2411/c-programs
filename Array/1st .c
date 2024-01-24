#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("enter marks");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("marks of %d=%d\n",i,a[i]);
	}
	getch();
}
