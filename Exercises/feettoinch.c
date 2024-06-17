// Conversion from feet to inches: multiplying by 12
#include <stdio.h>

int main() {
    
    float feet = 0;
    float inches = 0;
    
    printf("Enter length (in feet): ");
    scanf("%f", &feet);
    
    inches = feet * 12;
    printf("%.2f feet = %.2f inches\n", feet, inches);

    return 0;
}
