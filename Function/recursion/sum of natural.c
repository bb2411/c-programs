#include <stdio.h>
#include<conio.h>
int sum();
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	printf("Sum = %d ", sum(n));
	return 0;
}
int sum(int n)
{
	if (n <= 1)
		return n;
	return n + sum(n - 1);
}
