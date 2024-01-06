#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);

    int result = a + b;

    printf("The result is %d\n", result);

    return 0;
}
