#include<stdio.h>
#include<conio.h>
#include<string.h>
int last();
int data();
int table();
void calc();
void main()
{
	int b,c,cho,a;
	read:
	printf("\n1,calculator");
	printf("\n2,table");
	printf("\n3,data type");
	printf("\nenter your choice=");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("calculator");
		calc();
		break;
	case 2:
		printf("tables");
		table();
		break;
	case 3:
		printf("data type");
		data();
		break;
	case 4:
		printf("desk");
		last();
		break;
	default:
		printf("invalid input");
		last();
		goto read;
		break;
	}
}
void calc()
{
int a,b,ans;
char choice;
  	printf("enter your choice="); 
  	scanf("%c",&choice);
  	printf("enter the value of a=");
  	scanf("%d",&a);
  	printf("enter the value of b=");
	scanf("%d",&b);
  		switch(choice)
  	    {
  			case '+':
  				ans = a + b;
  				printf("addition of %d and %d = %d\n",a,b,ans);
 			break;
 		 
			case '-':
				ans=a-b;
  				printf("subraction of %d and %d = %d\n",a,b,ans);
  			break;
  		    
  			case '*':
  				ans=a*b;
  				printf("multiplicatio of %d and %d = %d\n",a,b,ans);
 			break;
 		
  			case '/':
  				ans=a/b;
  				printf("division of %d and %d = %d\n",a,b,ans);
  			break;
  													
  			case '%':
  				ans=a%b;
  				printf("reminder when divided of %d and %d = %d\n",a,b,ans);
  			break;
  			
  			default:
  			printf("invalid");
  			break;
  		}
  		main();
}
int table()
{
	int i,a,n,sum;
	printf("enter n number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=10;a++)
		{
			sum=i*a;
			printf("%d*%d=%d\n",i,a,sum);
		}
	}
	main();
}
int data()
{
	int a;
	printf("\nfor exit program write 100");
	printf("\nenter input");
	scanf("%s",&a);
	if(a>=65 && a<=91)
	{
		printf("character");
	}
	else if(a>=97 && a<=123)
	{
		printf("character");
	}
	else if(a>=48 && a<=57)
	{
		printf("number");
	}
	else 
	{
		printf("special character");
	}
	main();
}
int last()
{
	printf("tab in progress");
}
