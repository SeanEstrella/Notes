/* Filename: asgn3_isbn_verifier.c 
   Purpose: An ISBN is entered as input by a user 
            and broken up into each of its components*/

#include <stdio.h>

int main(void)
{
   int gs1_prefix, group_id, pub_code, item_num, check_digit;

   printf("Enter ISBN: ");
   scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &pub_code, &item_num, &check_digit);

   printf("GS1 prefix: %d\n", gs1_prefix);
   printf("Group identifier: %d\n", group_id);
   printf("Publisher code: %d\n", pub_code);
   printf("Item number: %d\n", item_num);
   printf("Check Number: %d\n", check_digit);

   return 0; 
}