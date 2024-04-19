#include <stdio.h>

int main(void) {
    double total = 0; 
    int counter = 0; 
    double grade = 0; 

    printf("%s", "Enter grade (-1 to end):\n"); 

    while (grade != -1) {
        scanf("%lf", &grade); 
        if (grade != -1) { 
            total += grade; 
            ++counter; 
        }
    } 

    if (counter != 0) {
        double average = total / counter; 

        printf("Class average is: %.2f\n", average);
    } 
    else { 
        puts("No grades were entered");
    } 

    return 0;
}
