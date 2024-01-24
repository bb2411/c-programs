#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	printf("enter your percentage=");
	scanf("%f",&a);
	if(a>=70 && a<=100)
	{
		printf("you are distinction");
	}
	else if(a>=60 && a<=69)
	{
		printf("you got first class");
	}
	else if(a>=50 && a<=59)
	{
		printf("you got second class");
	}
	else if(a>=40 && a<=49)
	{
		printf("you got pass");
	}
	else if(a<=40 && a>=1)
	{
		printf("you failed");
	}
	getch();
}
