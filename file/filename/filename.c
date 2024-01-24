#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*ptr;
	int i;
	char fname[10];
	printf("enter file name");
	scanf("%s.txt",&fname);
	ptr=fopen(fname,"w+");
	fprintf(ptr,"hello world");
	fclose(ptr);
}
