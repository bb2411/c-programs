#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,x,y,z;
	printf("enter The value of A=");
	scanf("%f",&a);	
	
	printf("enter value of B=");
	scanf("%f",&b);
	
	printf("enter value of C=");
	scanf("%f",&c);
	x=a-b/3+c*2-1;
	y=a-b/(3+c)*(2-1);
	z=a-(b/(3+c)*2)-1;
	printf("X=%f\n",x);
	printf("Y=%f\n",y);
	printf("Z=%f\n",z);
	getch();
}
