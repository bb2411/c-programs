#include<stdio.h>
void main()
{
    FILE *ptr;
    char name[10];
    char dept[10];
    char ch;
    ptr=fopen("db.txt","a");
    printf("enter name=");
    scanf("%s",&name);
    printf("enter department=");
    scanf("%s",&dept);
    fprintf(ptr,"%s\t\t\t%s",name,dept);
    while (1)
    {
        ch=fgetc(ptr);
        printf("%c",ch);
        if(ch==EOF)
        break;
    }
    fclose(ptr);
}