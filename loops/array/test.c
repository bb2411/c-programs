#include<stdio.h>
#include<conio.h>
void main()
{
	int test[10];
	int i,j;
	for(i=0;i<=10;i++)
	{
		printf("enter number");
		scanf("%d",&test[i]);
		for(j=0;j<=10;j++)
		{
			printf("%d\n",test[i]);
		}
	}
	getch();
}
