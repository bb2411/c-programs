#include <stdio.h>
#include<conio.h>
int main()
{
    int i, a, n, sum=0, b=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=2; i<=n; i+=2)
    {
    	printf("%d+%d\n",i,sum);
        sum += i;
    }
    for(a=0;a<=n;a+=1)
    {
    	if(a%2==1)
    	{
    	printf("%d+%d=%d\n",a,b,sum);
    	b+=a;
        }
        else
        {
        	printf("error");
		}
	}
    printf("Sum of even= %d", n, sum);
    printf("sum of odd=%d",b);
    return 0;
}
