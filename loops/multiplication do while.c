#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	int sum=1;
	printf("enter n number");
	scanf("%d",&n);
		for(j=1;j<=10;j++)
		{
			sum=n*j;
			printf("\n%d*%d=%d",n,j,sum);
		}
	getch();
}
