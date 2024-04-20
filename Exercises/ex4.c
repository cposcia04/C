#include <stdio.h>

int main(void) {
    int counter = 1;
    double grade;
    double total = 0; 

    while (counter <= 10) {
        printf("%s", "Enter a grade: ");
        scanf("%lf", &grade);
        total += grade; 
        ++counter;
    }

    double average = total / 10; 
    printf("Class average is: %.2f\n", average);

    return 0;
}
