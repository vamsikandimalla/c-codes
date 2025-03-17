#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
	  if(x>z)
	  printf("%d is greatest\n",x);
	  else
	  printf("%d is greatest\n",y);
	  
	}
	if(y>z)
	 printf("%d is greatest\n",y);
	 else
	  printf("%d is greatest\n",z);
	
}
