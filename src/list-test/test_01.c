#include <stdio.h>
#include "list.h"

int main(void){
    int i;
    Int_List list = list_i();
    for(i = 0; i < 21; i++){
        push(&list, i+1);
    }
    for(i = 0; i < 21; i++){
        printf("list[%d] = %d\n", i, get_i(&list, i));
    }
    clear(&list);
    return 0;
}