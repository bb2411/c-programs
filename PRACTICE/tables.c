#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,n,sum;
	printf("enter n number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=10;a++)
		{
			sum=i*a;
			printf("%d*%d=%d\n",i,a,sum);
		}
	}
	getch();
}
