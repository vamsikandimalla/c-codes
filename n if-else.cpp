#include <stdio.h>

int main() {
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 500) {
        printf("x is greater than 500\n");
        
        if (x > 1000) {
            printf("x is also greater than 1000\n");
        } else {
            printf("x is between 501 and 1000\n");
        }
    } else {
        printf("x is 500 or less\n");
    }

    return 0;
}

