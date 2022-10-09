#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Int_List list_i(){
    Int_List l = {};
    l.list =  (int *) malloc(10 * sizeof(int));
    l.size = 0;
    l.cap = 10;
    return l;
}

void push(Int_List *list, unsigned el){
    if(list->size > list->cap - 1){
        list->cap *= 2;
        printf("The list needs to grow. New capacity: %d \n", list->cap);
        list->list = realloc(list->list, list->cap * sizeof(int));
    }
    list->list[list->size] = el;
    list->size++;
}
int get_i(Int_List *list, unsigned index){
    return list->list[index];
}
void clear(Int_List *list){
    free(list->list);
    list->list = NULL;
    list->size = 0;
    list->cap = 10;
    printf("The list now is empty!\n");
}