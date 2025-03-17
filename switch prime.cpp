#include<stdio.h>
int main()
 {
    int n, choice;
    int i,count=0;
     int fact = 1;
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
            
      case 2:
   

    if (n < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", n, fact);
    }
    break;		
      case 3:
      	
            if (n % 2 == 0)
                printf("%d is even.\n", n);
            else
                printf("%d is odd.\n", n);
            break;
            
        case 4:
            if (n > 0)
                printf("%d is positive.\n", n);
            else if (n < 0)
                printf("%d is negative.\n", n);
            else
                printf("The number is zero.\n");
            break;
            
        default:
            printf("Invalid choice.\n");
    }
	}

        
