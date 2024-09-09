/* Calculates the volume of a sphere with the radius 10 meters */

#include <stdio.h>

#define SPHERE_RADIUS 10
#define SCALE_FACTOR (4.0f / 3.0f)
#define PI 3.1415926535f


int main(void)
{
    printf("%.2f\n", SCALE_FACTOR * PI * SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS);

    return 0; 
}