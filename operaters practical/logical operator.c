#include<stdio.h>
#include<conio.h>
int main()
{
int a=8,b=8,c=12,result;
result=(a==b)&&(c>b);
printf("(a==b)&&(c>b) is equal to %d\n",result);
result=(a==b)&&(c<b);
printf("(a==b)&&(c<b) is equal to %d\n",result);
result=(a==b)||(c<b);
printf("(a==b)||(c<b) is equal to %d\n",result);
result=(a!=b)||(c<b);
printf("(a!=b)||(c<b) is equal to %d\n",result);
result=!(a!=b);
printf("!(a!=b) is equal to %d\n",result);
result=!(a==b);
printf("!(a==b) is equal to %d",result);
return 0;	
}
