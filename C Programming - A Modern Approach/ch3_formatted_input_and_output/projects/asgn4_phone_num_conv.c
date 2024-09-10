/* Filename: asgn4_phone_num_conv.c 
   Purpose: Reformats a phone number entered as input by the user */

#include <stdio.h>

int main(void)
{
    int area_code, tele_prefix, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &tele_prefix, &line_number);
    printf("You entered %d.%d.%d\n", area_code, tele_prefix, line_number);

    return 0;
}