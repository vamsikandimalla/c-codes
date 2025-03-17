#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d\n",&year);
	year?printf("%d is a leap year.\n", year):printf("%d is not a leap year.\n", year);
}
