/* Calculates the after tax rate of a base rate from
   input provided by the user and tax rate of 5%.    */

#include <stdio.h>

#define TAX_FACTOR 1.05f

int main(void)
{
    float balance;

    printf("Enter an amount: ");
    scanf("%f", &balance);
    printf("With tax added: %.2f\n", balance * TAX_FACTOR);

    return 0;
}