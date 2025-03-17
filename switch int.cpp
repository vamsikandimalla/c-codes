#include<stdio.h>
int main()
{
	int x,y,n;
	printf("enter x,y");
	scanf("%d%d",&x ,&y);
	printf("select 1 for aad\n");
	printf("select 2 for sub\n");
	printf("select 3 for mult\n");
	printf("select 4 for quotient\n");
	printf("enter choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%d\n",x+y);
			break;
		case 2:
			printf("%d\n",x-y);
			break;
		case 3:
			printf("%d\n",x*y);
			break;
		case 4:
			printf("%d\n",x/y);
			break;
			
	}
				
	
}
