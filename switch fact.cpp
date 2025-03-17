#int main()
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
  include<stdio.h>

  
   case 2:
    int n, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (num < 0)
	 {
        printf("Factorial is not defined for negative numbers.\n");
    } 
	else {

        for (int i = 1; i <= num; i++)
		 {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
break;
}
