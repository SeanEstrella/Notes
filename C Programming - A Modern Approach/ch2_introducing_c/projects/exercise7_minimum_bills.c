/* Calculates the minimum number of $20, $10, $5, and $1 bills 
   needed to pay a dollar amount specified by user input.      */

#include <stdio.h>

#define ONE_DOLLARS 1
#define FIVE_DOLLARS 5
#define TEN_DOLLARS 10
#define TWENTY_DOLLARS 20

int main(void) 
{
    int dollar_amount, ones, fives, tens, twenties;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    twenties = dollar_amount / TWENTY_DOLLARS;
    dollar_amount = dollar_amount - (twenties * TWENTY_DOLLARS);
    tens = dollar_amount / TEN_DOLLARS;
    dollar_amount = dollar_amount - (tens * TEN_DOLLARS);
    fives = dollar_amount / FIVE_DOLLARS;
    dollar_amount = dollar_amount - (fives * FIVE_DOLLARS);
    ones = dollar_amount / ONE_DOLLARS;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}