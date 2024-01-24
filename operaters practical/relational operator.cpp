#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the value of a=");
scanf("%d",&a);
printf("enter the value of b=");
scanf("%d",&b);
printf("enter the value of c=");
scanf("%d",&c);
printf("%d==%d=%d\n",a,b,a==b);
printf("%d==%d=%d\n",a,c,a==c);
printf("%d>%d=%d\n",a,b,a>b);
printf("%d>%d=%d\n",a,c,a>c);
printf("%d<%d=%d\n",a,b,a<b);
printf("%d<%d=%d\n",a,c,a<c);
printf("%d!=%d=%d\n",a,b,a!=b);
printf("%d!=%d=%d\n",a,c,a!=c);
printf("%d>=%d=%d\n",a,b,a>=b);
printf("%d>=%d=%d\n",a,c,a>=c);
printf("%d<=%d=%d\n",a,b,a<=b);
printf("%d<=%d=%d\n",a,c,a<=c);
getch();
}
