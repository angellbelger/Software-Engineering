#include <stdio.h>
#include <stdlib.h>

// const
#define length 10

struct type_pilha{
    int data[length];
    int start;
    int final;
};

// global
struct type_pilha pilha;
int option;

// input/output

void push(){
    if (pilha.final == length){
        printf("It is full.\n");

    }else{
        printf("Type the value: ");
        scanf("%i", &pilha.data[pilha.final]);
        pilha.final++;
    }
}

void pop(){
    if (pilha.start == pilha.final){
        printf("It is empty.\n");

    }else{
        pilha.data[pilha.final-1] = 0;
        pilha.final--;
    }
}

void show_elements(){
    printf("\nstack: [");
    for (int i = 0; i < pilha.final; i++){
        printf("%i, ", pilha.data[i]);
    }
    printf("]\n");
}

// menu
void show_menu(){
    printf("\n--------------------\n");
    printf("\n1 - Add element.\n2 - Remove element.\n3 - Show elements.\n");
    printf("\n--------------------\n");
}

// main function
int main(void){
    printf("\nHello, world.\n");
    do{
        show_menu();
        printf("\nOption: ");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            show_elements();
            break;

        case 4:
            printf("\nExiting...\n");
            break;

        default:
            printf("Please, type a valid option.");
            break;
        }
    } while (option != 4);
    
}