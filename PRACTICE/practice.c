#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i;
	printf("enter no=");
	scanf("%d",&a);
	printf("enter no until print=");
	scanf("%d",&b);
	do
	{
	a=a+1;
	printf("%d\n",a);
    }
	while(a<=b);
	printf("%d",a);
	for(i=1; i<=b; i++)
	{
		printf("\nno=%d\n",i);
	}	
	getch();
}
