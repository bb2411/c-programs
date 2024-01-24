#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	read:
	printf("enter value of x");
	scanf("%d",&x);
	if(x!=10)
	goto read;
	printf("%d",x);
	getch();
}
