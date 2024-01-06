#include <stdio.h>

int main() {
    printf("Enter three integers:\n");

    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    int result = x * y * z;
    printf("The product is %d\n", result);

    return 0;
}
