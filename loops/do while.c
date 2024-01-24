#include <stdio.h>
int main()
{   
	int i,n,sum;
	printf("enter n number=");
	scanf("%d",&n);
	i=1;
    do
    {
        printf("%d*%d=%d\n",n,i,sum);
        i++;
        sum=i*n;
    } 
	while (i<=10);
    return 0;
}
