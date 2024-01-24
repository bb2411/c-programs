#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a>=1)
	{
		printf("number is positive");
	}
	else if(a<=-1)
	{
		printf("number is negative");
	}
	else
	{
		printf("number is zero");
	}
	getch();
}
