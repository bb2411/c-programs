#include <stdio.h>
int sum_of_natural_numbers(int n)
{
int sum = 0;
for(int i = 1; i <= n; i++)
{
sum += i;
}
return sum;
}
int main()
{
int n;
printf(�\nEnter the number : �);
scanf(�%d�, &n);
printf(�\nSum of %d Natural Numbers is %d\n �,n,sum_of_natural_numbers(n));
return 0;
}


