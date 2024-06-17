#include <stdio.h>

int main() {
    
    float b, h = 0;
    float area = 0;
    
    printf("Base: ");
    scanf("%f", &b);
    
    printf("Height: ");
    scanf("%f", &h);
    
    area = b * h;
    printf("Area = %.2f", area);

    return 0;
}
