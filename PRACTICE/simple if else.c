#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	if(a==b)
	{
		printf("%d=%d",a,b);
	}
	else
	{
		printf("not equal");
	}
	getch();
}
