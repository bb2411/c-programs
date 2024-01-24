#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int b[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("enter number=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		b[i]=a[i];
		printf("b[%d]=%d\n",i,b[i]);
	}
	getch();
}

