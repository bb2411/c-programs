#include<stdio.h>
#include<conio.h>
void main()
{
	int i,c,n;
	int arr[n];
	read:
	printf("enter no of entry   :");
	scanf("%d",&n);
	n=n+i;
	for(i=i;i<=n;i++)
	{
		printf("enter [%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter yes no");
	scanf("%d",&c);
	if(c==1)
	{
		goto read;
	}
	for(i=0;i<=n;i++)
	{
		printf("\n[%d]=%d",i,arr[i]);
	}
}
