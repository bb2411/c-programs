#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,x;
	printf("enter angle a=");
	scanf("%d",&a);
	printf("enter angle b=");
	scanf("%d",&b);
	printf("enter angle c=");
	scanf("%d",&c);
	x=a+b+c;
	if(x==180)
	{
		printf("it is a tringle");
	}
	else
	{
		printf("it cannot for tringle");
	}
	getch();
}
