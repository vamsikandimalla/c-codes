#include<stdio.h>
int main()
{
	int a[10];
	int *ptr;
	int (*ptr1)[10];
	ptr=a;
	ptr1=&a;
	printf("%u %u\n",ptr,ptr1);
	ptr++;
	ptr1++;
    printf("%u %u\n",ptr,ptr1);
}
