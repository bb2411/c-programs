#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter the value of");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("larger value=%d\n",a);
		}
		else
		{
			printf("larger value=%d\n",c);
		}
	}
	else
	{
		printf("larger number=%d\n",b);
	}
}
