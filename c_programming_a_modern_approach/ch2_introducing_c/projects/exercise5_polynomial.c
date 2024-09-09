/* Evaluates the polynomial with the variable x as input entered by the user.*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("%d\n", (3*x*x*x*x*x)+(2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6);

    return 0;
}