#include<stdio.h>
int main()
{
	int a=5;
	float b=3.45;
	void *ptr;
	ptr=&a;
	printf("%d\n",*(int*)ptr);
	ptr=&b;
	printf("%f\n",*(float*)ptr);
	
}
