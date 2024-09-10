/* Filename: asgn5_matrix_sum.c 
   Purpose: Prompts the user for number from 1 to 16 (in any order) to 
            format the numbers and sum the rows, columns, and diagonals */
        
#include <stdio.h>

int main(void)
{
    int zero_zero, zero_one, zero_two, zero_three, 
        one_zero, one_one, one_two, one_three,
        two_zero, two_one, two_two, two_three,
        three_zero, three_one, three_two, three_three;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &zero_zero, &zero_one, &zero_two, &zero_three,
            &one_zero, &one_one, &one_two, &one_three,
            &two_zero, &two_one, &two_two, &two_three,
            &three_zero, &three_one, &three_two, &three_three);

    printf("\n%2d %2d %2d %2d\n", zero_zero, zero_one, zero_two, zero_three);
    printf("%2d %2d %2d %2d\n", one_zero, one_one, one_two, one_three);
    printf("%2d %2d %2d %2d\n", two_zero, two_one, two_two, two_three);
    printf("%2d %2d %2d %2d\n", three_zero, three_one, three_two, three_three);

    printf("\nRow sums: %d %d %d %d\n",
           zero_zero + zero_one + zero_two + zero_three,
           one_zero + one_one + one_two + one_three,
           two_zero + two_one + two_two + two_three,
           three_zero + three_one + three_two + three_three);

    printf("Column sums: %d %d %d %d\n",
           zero_zero + one_zero + two_zero + three_zero,
           zero_one + one_one + two_one + three_one,
           zero_two + one_two + two_two + three_two,
           zero_three + one_three + two_three + three_three);

    printf("Diagonal sums: %d %d\n",
           zero_zero + one_one + two_two + three_three,
           zero_three + one_two + two_one + three_zero);

    return 0;
}