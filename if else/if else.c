#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	cout("enter value of b=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("larger value=%d",a);
	}
	else
	{
		printf("larger value=%d",b);
	}
	getch();
}
