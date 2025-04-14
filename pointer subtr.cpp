#include<stdio.h>
int main()
{
	int x=4,y=3;
	int *ptr =&x;
	int *ptr1 =&y;
	printf("%u %u\n",ptr,ptr1);
	printf("%u",ptr1-ptr);
	return 0;
}
