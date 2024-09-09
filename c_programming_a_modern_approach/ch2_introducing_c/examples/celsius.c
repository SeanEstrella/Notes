/* Converts a Farenheight temperature to Celcius */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f);

int main(void) 
{
    float farenheight, celsius;

    printf("Enter Farenheight temperature: ");
    scanf("%f", &farenheight);
    celsius = (farenheight - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);
    
    return 0;
}