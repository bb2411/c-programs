#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2];
	int i,j,sum=0;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("enter value for a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("\nsum=%d",sum);
	getch();
}
