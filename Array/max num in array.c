#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,max,temp;
	max=0;
	for(i=0;i<=4;i++)
	{
		printf("enter no=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\nouter :%d   %d  %d",a[i],temp,max);
		if(a[i]>max)
		{
			printf("\ninner :%d   %d  %d",a[i],temp,max);
			temp=a[i];
			max=temp;
		}
	}
	printf("maximum number=%d",temp);
	getch();
}
