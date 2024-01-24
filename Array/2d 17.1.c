#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][2];
	int i,j,b;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("enter value for a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\na[%d][%d]=%d",i,j,a[i][j]);
		}
	}
	getch();
}
