#include<stdio.h>
#include<conio.h>
struct person
{
	int day;
	int month;
	int year;
 }person1;
void main()
 {
 	struct person;
 	printf("enter DOB=");
 	scanf("%d%d%d",&person1.day,&person1.month,&person1.year);
 	printf("date of birth=%d/%d/%d",person1.day,person1.month,person1.year);
 	getch();
 }

