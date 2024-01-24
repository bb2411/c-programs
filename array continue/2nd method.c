#include<stdio.h>
#include<conio.h>
void main()
{
	int i,c,temp=0,temp2=0,n;
	int arr[100];
	read:
	printf("enter no of entry   :");
	scanf("%d",&n);
	i=n+temp;
	n=n+temp;
	for(i=temp;i<=n;i++)
	{
		printf("enter [%d]=",i);
		scanf("%d",&arr[i]);
		temp=i+1;
	}
	printf("\nenter yes no");
	scanf("%d",&c);
	if(c==1)
	{
		goto read;
	}
	for(i=0;i<=temp-1;i++)
	{
		printf("\nenter [%d]=%d",i,arr[i]);
	}
}
