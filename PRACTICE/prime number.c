#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	printf("enter a number=");
	scanf("%d",&a);
	if(n==0||n==1)
	flag=1;
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d is prime number",n);
	else
	printf("%d is not prime number",n);
	getch();
}
