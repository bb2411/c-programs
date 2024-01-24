#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    FILE *ptr;
    ptr=fopen("datbase.txt","w");
    fprintf(ptr,"hello world");
    fclose(ptr);
}
