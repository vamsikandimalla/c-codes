
#include<stdio.h>
void prime(int);
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	prime(x);
}
void prime(int n)
{
	int i,count=0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		count ++;
		
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
}
