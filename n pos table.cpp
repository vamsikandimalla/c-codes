#include <stdio.h>

int main() {
    int n;
    float sum = 0, 
    printf("Enter the number of positive integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int numbers[n]; 
    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

    
        if (numbers[i] <= 0)
		 {
            printf("Only positive integers are allowed. Try again.\n");
            i--; 
            continue;
        }

        sum += numbers[i];
    }
    average = sum / n;

    printf("\nThe average of the %d numbers is: %.2f\n", n, average);

    return 0;
}

