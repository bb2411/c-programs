#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("for exit program write 100");
	printf("\nenter input");
	scanf("%s",&a);
	if(a>=65 && a<=91)
	{
		printf("character");
	}
	else if(a>=7 && a<=123)
	{
		printf("character");
	}
	else if(a>=48 && a<=57)
	{
		printf("number");
	}
	else 
	{9
		printf("special character");
		exit(1);
	}
	getch();
}
