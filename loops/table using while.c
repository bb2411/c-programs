#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum;
	read:
	printf("enter n number=");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		sum=1;
		sum=n*i;
		printf("\n%d*%d=%d",n,i,sum);
		i++;
	}
	getch();
}
