#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	c=a+b;
	printf("a+b=%d\n",c);
	c=a-b;
	printf("a-b=%d\n",c);
	c=a*b;
	printf("a*b=%d\n",c);
	c=a/b;
	printf("a/b=%d\n",c);
	c=a%b;
	printf("remainder when divided=%d",c);
getch();
}
