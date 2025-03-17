#include<stdio.h>
int main()
 {
    int n, choice;
    printf("Enter a n: ");
    scanf("%d", &n);
    
    printf("Choose an option:\n");
    printf("1. Check if prime\n");
    printf("2. Find factorial\n");
    printf("3. Check even or odd\n");
    printf("4. Check positive or negative\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
        	int i,count=0;
          	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if (count==2)
	printf("prime");
	else
	printf("not prime");
            break;
