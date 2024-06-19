// C program to check whether a given number is EVEN or ODD
#include <stdio.h>

int main() {
    
    int x = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    if(x%2==0){
        printf("%d is EVEN", x);
    } else {
        printf("%d is ODD", x);
    }

    return 0;
}
