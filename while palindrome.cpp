#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter n");
	scanf("%d",&n);
	int temp =n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
	}
	n=temp;
	if(n==sum)
	printf("palindrome");
	else
	printf("not palindrome");
	
	return 0;
	
	
}
