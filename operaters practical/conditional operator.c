#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter your marks=");
	scanf("%d",&a);
	printf("you %s",a>60?"passed":"failed");
	getch();
}
