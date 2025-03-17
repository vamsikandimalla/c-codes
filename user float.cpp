#include<stdio.h>
int sum(int,float);
int main()
{
	int x;
    float y;
	printf("enter x,y");
	scanf("%d",&x);
	scanf("%f",&y);
	float
	 z=sum(x,y);
	printf("%f",z);
	}
	int sum (int a,float b)
	{
		float c=a+b;
		return c;
	}
