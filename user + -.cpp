#include<stdio.h>
int sum(int,int);
int sub(int,int);
int main()
{
	int x,y;
	printf("enter x,y");
	scanf("%d%d",&x,&y);

	printf("%d\n",sum(x,y));
	printf("%d\n",sub(x,y));
		printf("%d\n",sum(9,5));
	printf("%d\n",sub(6,2));

	}
	int sum (int a,int b)
	{
		return a+b;
	}
	int sub (int a, int b)
	{
		return a-b;
	}
