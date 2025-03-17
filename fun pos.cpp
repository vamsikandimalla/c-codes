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
	(x>0)?printf("positive"):(x<0)?printf("negative"):printf("zero");

}
