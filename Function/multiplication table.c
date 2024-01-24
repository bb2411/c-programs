#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
	int a,b,c,sum;
	printf("enter 1st number=");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
		{
			fact(a,b,sum);
		}
}
int fact(a,b,sum)
{
	sum=a*b;
    printf("\n%d*%d=%d",a,b,sum);
}
