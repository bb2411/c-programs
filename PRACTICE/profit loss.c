#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter MRP");
	scanf("%d",&a);
	printf("enter selling price");
	scanf("%d",&b);
	if(a<b)
	{
		printf("profit");
	}
	else if(a>b)
	{
		printf("loss");
	}
	else
	{
		printf("zero margin");
	}
	getch();
}
