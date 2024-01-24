#include<stdio.h>
#include<conio.h>
void main()
{
	int age,wg;
	printf("enter age=");
	scanf("%d",&age);
	printf("enter wight=");
	scanf("%d",&wg);
	if((age>=18)&&(age<=55))
	{
		if(wg>=45)
		{
			printf("You are eligble for donation");
		}
		else
		{
			printf("you are under wight");
		}
	}
	else
	{
		printf("you are under age");
	}
}
