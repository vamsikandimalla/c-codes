//with return and with arguments

#include<stdio.h>
int fact(int);
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	printf("%d",fact (x));
}
int fact (int n)
{

	int i,f =1;
	for(i=1;i<=n;i++);
		f*=1;
	
	return f;

}
