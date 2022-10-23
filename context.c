#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "context.h"


void __DoSomeBusinessLogic(void *this){

    Context *context = (Context *)malloc(sizeof(Context));

    printf("Context: Sorting data using the strategy (not sure how it'll do it) %s\n");
    char list[] = {"a", "b", "c", "d", "e"};

    strategy_t *strategy_new(){
        return (strategy_t *)malloc(sizeof(strategy_t));
    }
}

void strategy_ctor(strategy_t *this){
    this->list = (char*)malloc(6*sizeof(char));
    strcpy(this->list, "a", "b", "c", "d", "e");
    this->strategy_func = &__DoSomeBusinessLogic;
}

void strategy_dtor(strategy_t*this){
    free(this->list);
}
