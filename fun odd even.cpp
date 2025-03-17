//odd even
#include<stdio.h>
void num (int);
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	num (x);
}
void num(int n)
{
	
            if (n % 2 == 0)
                printf("%d is even.\n", n);
            else
                printf("%d is odd.\n", n);
}
