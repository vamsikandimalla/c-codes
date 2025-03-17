#include<stdio.h>
int sum(int,int);
int main()
{
	int x,y;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	int z=sum(x,y);
	printf("%d",z);
	}
	int sum (int a,int b)
	{
		int c=a+b;
		return c;
	}
