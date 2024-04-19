#include <stdio.h>

int main(void) {
    int sum = 0; 
    int x = 1;

    while (x <= 10) {
        sum += x;
        ++x;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
