#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    const int LENGTH = 10;
    int *vector;

    vector = (int *) malloc(sizeof(int) * LENGTH);

    for (int i = 0; i < LENGTH; i++){
        vector[i] = pow(2, i);
        printf("\nPosition: %i, value: %i\n", i, vector[i]);
    }
    free(vector);

    return 0;

}