#include <stdio.h>

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    float kelvin = celsius + 273.15f;
    float fahrenheit = celsius * 1.80f + 32.00f;

    printf("[%.5f, %.5f]\n", kelvin, fahrenheit);

    return 0;
}
