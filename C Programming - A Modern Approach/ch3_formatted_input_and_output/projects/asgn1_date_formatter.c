/* Filename: asgn1_data_formatter.c
   Purpose: Accepts a date as input and converts it to another form */

#include <stdio.h>

int main(void) 
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%-2.2d%-2.2d\n", year, month, day);

    return 0;
}