#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==4)
	{
		break;
	}
	printf("%d",i);
	}
	return 0;
}
