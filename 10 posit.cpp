#include <stdio.h>

int main() {
    int numbers[10], sum = 0;
    float average;

    printf("Enter 10 positive integers:\n");

    // Loop to take input and calculate sum
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        // Ensure the number is positive
        if (numbers[i] <= 0) {
            printf("Only positive integers are allowed. Try again.\n");
            i--; // Decrement i to re-enter the value
            continue;
        }

        sum += numbers[i];
    }

    // Calculate the average
    average = sum / 10.0;

    // Display the result
    printf("The average of the 10 numbers is: %.2f\n", average);

    return 0;
}

