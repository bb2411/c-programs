#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr;
	*ptr=6;
	printf("%d",*ptr);
	/*
	char a[10][100];
	int i,n;
	int *ptr;
	ptr=&n;
	ptr=10;
	printf("%d",n);
	printf("%d",ptr);
	for(i=0;i<=10;i++)
	{
		printf("\na[%d]=%d",i,&a[i]);
	}*/
	return 0;
}
