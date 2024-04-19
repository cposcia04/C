// Sum of two integers
#include <stdio.h>
int main(void){
int x, y;
  printf("%s", "Enter two integers:\n"); //prompt
  scanf("%d %d", &x, &y); //read the two integers

  int sum = x + y; //sum
  printf("The sum is: %d\n", sum); 

  return 0;
}
