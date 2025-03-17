#include<stdio.h>
void num (int);
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	num(x);
}
void num (int x)
{
	if(x>0)
	printf("positive");
	else
	{
		if(x<0)
		printf("negative");
		else
		printf("zero");
	}
}
