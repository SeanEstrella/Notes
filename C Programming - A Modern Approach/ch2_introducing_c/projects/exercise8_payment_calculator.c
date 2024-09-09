/* Displays the balance of a loan payment amount after each of the 
   first three months of payment from input provided by the user   */

#include <stdio.h>

#define PERCENT_FACTOR 100
#define NUM_OF_MONTHS 12

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate =  (interest_rate / PERCENT_FACTOR) / NUM_OF_MONTHS;
    loan_amount = (loan_amount * interest_rate) + loan_amount - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", loan_amount);
    loan_amount = (loan_amount * interest_rate) + loan_amount - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", loan_amount);
    loan_amount = (loan_amount * interest_rate) + loan_amount - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", loan_amount);

    return 0;
}