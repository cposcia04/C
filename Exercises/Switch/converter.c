#include <stdio.h>

int main() {
    
    int choice = 0;
    float temperature = 0;
    
    printf("(1) Celsius to Fahrenheit\n(2) Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    
    // Check for valid choice
    if(choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1; // Exit the program with an error code
    }

    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    
    switch(choice) {
        case 1:
            printf("%.2f°C = %.2f°F\n", temperature, (temperature * 9/5) + 32);
            break;
        
        case 2:
            printf("%.2f°F = %.2f°C\n", temperature, (temperature - 32) * 5/9);
            break;
    }
        
    return 0;
}

