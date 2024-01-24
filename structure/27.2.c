#include<stdio.h>
#include<conio.h>
struct std
{
	int en;
	char name[20];
	char email[50];
	int no;
	float preper[100];
	char dept[50];
};
void main()
{
	int i,j;
	struct std s[5];
	for(i=0;i<=1;i++)
	{
		printf("enter enroll=");
		scanf("%d",&s[i].en);
		printf("enter name=");
		scanf("%s",&s[i].name);
		printf("enter email=");
		scanf("%s",&s[i].email);
		printf("number=");
		scanf("%d",&s[i].no);
		printf("privios years persentage=");
		scanf("%f",&s[i].preper[i]);
		printf("department=");
		scanf("%s",&s[i].dept);
		printf("\n2nd input\n");
	}
	printf("\n\nstudent information\n\n");
	for(i=0;i<=1;i++)
	{
		printf("\nenroll=%d",s[i].en);
		printf("\nname=%s",s[i].name);
		printf("\nemail=%s",s[i].email);
		printf("\nnumber=%d",s[i].no);
		printf("\nprivios year persentage=%f",s[i].preper[i]);
		printf("\ndepartment=%s",s[i].dept);
	}
	getch();
}

