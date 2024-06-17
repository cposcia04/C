//area = 6 * a * a;
//volume = a * a * a;

#include <stdio.h>

int main() {
    float a;
    float area, volume;

    printf("Enter length size: ");
    scanf("%f", &a);

    area = 6 * a * a;
    volume = a * a * a;

    printf("Area = %.2f\nVolume = %.2f\n", area, volume);

    return 0;
}
