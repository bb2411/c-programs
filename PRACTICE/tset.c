#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*ptr;
	scanf("%d",&a);
	ptr=&a;
	printf("%d",*ptr);	
}
