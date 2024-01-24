#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,temp=1;
	int user[100][100][100];
	for(a=0;a<=100;a++)
	{
		for(b=0;b<=100;b++)
		{
			for(c=0;c<=100;c++)
			{
				printf("\n%d=%d",user[a][b][c],&user[a][b][c]);
				printf("\n%d=%d",user[a][b][c],&user[a][b][c]);
				temp++;
			}
		}
	}
	d=sizeof(user);
	printf("name=%d",sizeof(user));
	printf("\nmemory address we have registerd= %d",temp);
}
