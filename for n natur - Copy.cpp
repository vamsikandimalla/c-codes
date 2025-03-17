//C Program for Sum Of N Natural Numbers
#include <stdio.h>
int main() 
{ 
    int n, i, Sum = 0;
    printf("enter n");
    scanf ("%d", &n);

    //use for loop for these condition
    for(i = 1; i <= n; i++)
    {
         Sum = Sum + i;
    }

    printf ("Sum of Natural Numbers = %d\n", Sum);

    return 0;
}
