#include <stdio.h>
#define pi 3.14

int main() {
    
    float r = 0;
    float area, perimeter = 0;
    
    printf("Enter radius: ");
    scanf("%f", &r);
    
    area = pi * r * r;
    perimeter = 2 * pi * r;
    
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
