#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,mini,temp;
	mini=a[0];
	printf("Enter 5 value in array=\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	mini = a[0];
	for(i=1;i<=4;i++)
	{
		if(a[i]< mini)
		{
		temp=a[i];
		mini=temp;
		}
		
	}
	printf("the mini number in array=%d",temp);
getch();
}
