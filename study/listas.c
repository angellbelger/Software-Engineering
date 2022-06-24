#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definindo a estrutura lista
struct no{
    int data;
    struct no *prox;
};

// variaveis
typedef struct no *ptr_no;
ptr_no list;
int option;

//insert element
void insert(ptr_no list){
    while (list->prox != NULL){
        list = list->prox;
    }
    list->prox = (ptr_no) malloc(sizeof(struct no));
    list = list->prox;
    list->data = rand()%100;
    list->prox = NULL;
}

//remove
void removed(ptr_no list){
    int data;
    ptr_no actually;
    actually = (ptr_no) malloc(sizeof(struct no));
    printf("\nChoose an item: \n");
    scanf("%i", &data);
    while (list->data != data)
    {
        if (list->prox == NULL){
            break;
        }
        actually = list;
        list = list->prox;
    }
    if (list->data == data){
        actually->prox = list->prox;
    }
    
}

//show list
void show_list(ptr_no list){
    while (1)
    {
        printf("%i", list->data);
        if (list->prox == NULL){
            break;
        }
    }
    list = list->prox;
    
}

void show_list2(ptr_no list){
    while (list->prox != NULL) {
        printf("%i", list->data);
        list = list->prox;
    }
    printf("%i, ", list->data);
}

//show menu
void show_menu(){
    show_list(list);
    printf("\n--------------------\n");
    printf("\nChoose option: ");
    printf("\n1 - Insert in the final list\n");
    printf("2 - Remove element\n");
    printf("3 - Exit");
    printf("\n--------------------\n");
}

//select menu
void select_menu(int option){
    switch (option)
    {
    case 1:
        insert(list);
        break;
    
    case 2:
        removed(list);
        break;
    
    default:
        printf("Please, type a valid option.\n");
        break;
    }
}

// main function
int main(void){
    printf("\nHello, world.\n");
    srand(time(NULL));
    option = 1;

    list = (ptr_no) malloc(sizeof(struct no));
    list->data = 0;
    list->prox = NULL;

    while (option != 0)
    {
        show_menu();
        scanf("%i", &option);
        select_menu(option);
    }
    
}