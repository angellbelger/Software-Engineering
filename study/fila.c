#include <stdio.h>
#include <stdlib.h>

#define length 5
// struct
struct type_fila{
    int data[length];
    int ini;
    int final;
};

// global
struct type_fila fila;
int option;

// add element
void push_back(){
    if (fila.final == length){
        printf("It is full.\n");

    }else{
        printf("Type a value: ");
        scanf("%i", &fila.data[fila.final]);
        fila.final++;
    }
}

// remove element
void pop(){
    if (fila.ini == fila.final){
        printf("It is empty.\n");

    }else{
        for (int i = 0; i < length; i++){
            fila.data[i] = fila.data[i + 1];
        }
        fila.data[fila.final] = 0;
        fila.final--;
    }
}

// show elements
void show_elements(){
    printf("\nElements: [");
    for (int i = 0; i < fila.final; i++){
        printf("%i ", fila.data[i]);
    }
    printf("]\n");
}

// menu
void show_menu(){
    printf("\n--------------------\n");
    printf("1 - Add element.\n2 - Remove element.\n3 - Show elements.\n4 - Exit.");
    printf("\n--------------------\n");
}

// main function
int main(void){
    printf("\nHello, world.\n");
    do
    {
        show_menu();
        printf("Option: ");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            push_back();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            show_elements();
            break;
        
        default:
            printf("Please, type a valid option.\n");
            break;
        }
    } while (option != 4);
    

}