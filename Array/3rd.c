#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i;
	float avg;
	int sum=0;
	for(i=0;i<=4;i++)
	{
		printf("enter no=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	avg=sum/4;
	printf("average=%f",avg);
	getch();
}
