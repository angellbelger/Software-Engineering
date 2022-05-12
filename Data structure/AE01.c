#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;

    printf("\nHello, world.\n\n");

    p = (int *) malloc(sizeof(int));
    if (p == NULL){
        printf("\nError\n");
    }else {
        *p = 54;
        printf("Pointer adress: %p\n", &p);
        printf("The value = %i\n", *p);
    }
    return 0;
}