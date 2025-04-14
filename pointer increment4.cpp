//increment operator
#include<stdio.h>
int main()
{
	int x=5,y=10,z;
	int *ptr=&x;
	printf("%d %u",*ptr,ptr);
	z=(*ptr)++;
	printf("%d %d %u",z,*ptr,ptr);	
}
