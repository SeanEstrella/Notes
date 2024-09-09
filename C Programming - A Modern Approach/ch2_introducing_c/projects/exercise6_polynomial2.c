/* Evaluates the polynomial with the variable x as input entered by the user.
   Uses Horner's Rule as evaluation technique.                               */

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("%d\n", ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}