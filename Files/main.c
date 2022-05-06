#include <stdio.h>

int main(){
    printf("hello, world.\n");
    int x, y, z;
    x = 100;
    y = 300;
    z = y - x;
    int number1, number2;
    printf("\nThe value of z is %i", z);
    printf("\nNow, is your turn!");
    printf("Type a number: ");
    scanf("%i", &number1);
    printf("Type another number: ");
    scanf("%i", &number2);
    printf("%i + %i = %i\n", number1, number2, number1 + number2);
    printf("bye!");

    return 0;
}