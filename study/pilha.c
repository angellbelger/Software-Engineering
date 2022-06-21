#include <stdio.h>
#include <stdlib.h>

#define length 5

struct type_pilha{
    int dados[length];
    int ini;
    int topo;
};

struct type_pilha pilha;

void push(int element){
    if (pilha.topo == length){
        printf("It is full.\n");
    }else{
        pilha.dados[pilha.topo] = element;
        pilha.topo++;
    }
}

void pop(){
    int element;
    if (pilha.topo == pilha.ini){
        printf("It is empty.\n");

    }else{
        pilha.topo--;
        element = pilha.dados[pilha.topo];
        return element;
    }
}

int main(){
    printf("\nhello, world.\n");


}