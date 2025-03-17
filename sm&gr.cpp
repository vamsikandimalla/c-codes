#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
	printf("%d is greatest",x);
	printf("%d is smallest",y);
	}
    else
	{
	printf("%d is greatest",y);
	printf("%d is greatest",x);
	
}
}
