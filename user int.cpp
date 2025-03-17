#include<stdio.h>
int sum(int,int);
int main()
{
	int x,y;
	printf("enter x,y");
	scanf("%d%d",&x,&y);

	printf("%d",sum(x,y));
	}
	int sum (int a,int b)
	{
		return a+b;
	}
