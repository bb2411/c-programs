#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ans;
char op;
    read:
  	printf("enter your choice="); 
  	scanf("%c",&op);
  	printf("enter the value of a=");
  	scanf("%d",&a);
  	printf("enter the value of b=");
	scanf("%d",&b);
  		switch(op)
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
  				goto read;
  			break;
  		}
getch();
}
