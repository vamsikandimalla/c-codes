#include<stdio.h>
int main()
{
	int x,y;
	char n;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	printf("select + for aad\n");
	printf("select - for sub\n");
	printf("select * for mult\n");
	printf("select / for quotient\n");
	printf("enter choice");
	scanf(" %c",&n);
	switch(n)
	{
		case '+':
			printf("%d\n",x+y);
			break;
		case '-':
			printf("%d\n",x-y);
			break;
		case '*':
			printf("%d\n",x*y);
			break;
		case '/':
			printf("%d\n",x/y);
			break;
			
	}
				
	
}
