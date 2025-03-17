#include<stdio.h>
char grade (int);
int main()
{
	int m;
	printf("enter m");
	scanf("%d",&m);
	printf("%c",grade(m));
}
char grade (int n)
{
	if(n>500)
	return 'A';
	else
	{
		if(n<400)
		return 'F';
		else
		return 'B';
	}
}
