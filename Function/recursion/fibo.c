#include<stdio.h>
#include<conio.h>
int fib();
int main()
{
	int n,i;
	printf("enter n number=");
	scanf("%d",&n);
	for(i=0;i=n;i++)
	{
	printf("%d", fib(n));
	for()
	return 0;
}
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

