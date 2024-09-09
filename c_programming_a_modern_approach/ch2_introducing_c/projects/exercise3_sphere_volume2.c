/* Calculates the volume of a sphere from input provided by the user */

#include <stdio.h>

#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.1415926535f

int main(void)
{
    float radius;

    printf("Enter sphere radius (meters): ");
    scanf("%f", &radius);
    printf("Radius (meters cubed): %.2f\n", SCALE_FACTOR * PI * radius * radius * radius);

    return 0;
}

