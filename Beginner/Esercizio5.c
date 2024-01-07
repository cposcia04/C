#include <stdio.h>

int main(void) {
    int base, altezza;

    printf("Valore della base: ");
    scanf("%d", &base);

    printf("Valore dell'altezza: ");
    scanf("%d", &altezza);

    int perimetro, area;
    perimetro = 2 * base + 2 * altezza;
    area = base * altezza;

    printf("Il perimetro è %d e l'area è %d\n", perimetro, area);

    return 0;
}
