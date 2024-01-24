#include<stdio.h>
#include<string.h>
void main()
{
	int a,b,c,d,cho,x,y,z;
	int i,m;
	user:
	printf("enter key=");
	scanf("%d",&d);
	printf("enter username=");
	scanf("%d",&a);
		if(a==154)
	{
	pass:
	printf("enter password=");
	scanf("%d",&b);
		if(b==112)
		{
			value:
			printf("enter youn ASC value=");
			scanf("%d",&c);
			if(c==001)
			{
				printf("clamed");
				choice:
				printf("\n1,new declaration");
				printf("\n2,end program");
				printf("\n3,continu loop");
				printf("\nenter choice 1 or 2 or 3 =");
				scanf("%d",&cho);
				if(cho==1)
				{
					goto user;
				}
				else if(cho==2)
				{
		             exit(0);
				}
				else if(cho==3)
				{
					loop:
					printf("enter x=");
					scanf("%d",&x);
					if(x==d)
					{
						printf("enter y=");
						scanf("%d",&y);
						if(y==x)
						{
							printf("enter z=");
							scanf("%d",&z);
							if(z==y)
							{
								printf("succesfully completed loop\n");
								printf("enter no till print=");
								scanf("%d",&m);
									for(i=0;i>=m;i++)
									{
										i+=1;
										printf("key=%d\n",i);
										goto choice;
									}
							}
							else
							{
								printf("invalid loop\n");
								goto loop;
							}
						}
							else
							{
								printf("invalid loop\n");
								goto loop;
							}
					}
					else
							{
								printf("invalid loop\n");
								goto loop;
							}
				}
				else
				{
				printf("invalid ip");
				goto choice;          
				}
			}
			else
			{
			printf("invalid value\n");
			goto value;
			}
		}
		else
		{
			printf("incorrect password\n");
			goto pass;
		}
	}
	else
	{
		printf("no user found\n");
		goto user;
	}
	getch();
}
