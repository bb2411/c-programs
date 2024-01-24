#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	read:
	printf("enter pass=");
	scanf("%d",&a);
	if(a==154)
	{
		myfun();
	}
	else
	{
		endfun();
	}
}
void myfun()
{
	int a,b,c;
	printf("1st function");
	printf("2nd function");
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("c=%d",c);
}
void endfun()
{
	int a,b,c;
	printf("2nd function");
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("c=%d",c);
	main();
}
