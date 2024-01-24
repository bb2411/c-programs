#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	printf("enter temperature=");
	scanf("%f",&a);
	if(a>=0 && a<=20)
	{
		printf("cool");
	}
	else if(a>=21 && a<=30)
	{
		printf("average");
	}
	else if(a>=31 && a<=40)
	{
		printf("hot");
    }
    else if(a>41)
    {
    	printf("extreme hot");
	}
    else
    {
    	printf("incorrect input");
	}
	getch();
}
