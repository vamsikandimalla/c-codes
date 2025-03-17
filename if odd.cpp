#include <stdio.h>

int main ()
{
    int x;
    printf ("enter x ");
    scanf ("%d", &x);

    if (x % 2)
       printf ("odd");
    else
       printf ("even");
  
    return 0;
}
