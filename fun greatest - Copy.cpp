//with return type and without arguments

#include<stdio.h>
int greatest();
int main()
{
	printf("%d\n",greatest());
}
int greatest()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	return(a>b?(a>c?a:c):b>c?b:c);
	
}
