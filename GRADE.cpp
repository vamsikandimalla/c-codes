#include<stdio.h>
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	if(x>500)
	printf("grade A");
	else
	{
		if(x<400)
		printf("grade F");
		else
		printf("grade B");
			}
}
