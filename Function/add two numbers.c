#include<stdio.h>
#include<conio.h>
int add();
void main()
{
	int a,b,c;
	printf("enter 1st number=");
	scanf("%d",&a);
	printf("enter 2nd number=");
	scanf("%d",&b);
	printf("sum=%d",add(a,b));
}
int add(a,b)
{
	return a+b;
}
