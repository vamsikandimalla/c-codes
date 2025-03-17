 //Conditions to check if the number is negative/positive or zero
#include <stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);      
                     //Conditions to check if the number is negative/positive or zero
    if (n> 0)
         printf("The number is positive");
    else if (n< 0)
        printf("The number is negative");
    else
        printf("Zero");
    
    return 0;
}
