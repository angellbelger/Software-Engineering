#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *p;
int x;

int main(void){
   printf("\nhello, world.\n");

   int *p;

   p = (int *) malloc(4);

   if (p == NULL){
      printf("Erro\n");
   }else {
      *p = 10;
      printf("The value of x = %i\n", *p);

      free(p);
   }
}