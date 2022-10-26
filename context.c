#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "context.h"


IStrategy *strategy_new()
{
    return (IStrategy *)malloc(sizeof(IStrategy));
}

void __SetStrategy(void *this){
    IStrategy *_strategy = (IStrategy *)this;
}

void __DoSomeBusinessLogic(IStrategy* this, char data){
    
    IStrategy *_strategy = (IStrategy *)this;
    this->_strategy.DoAlgorithm = data;
    printf("a", "b", "c", "d", "e", _strategy->data);

}

void context_ctor(IStrategy *this, char data){
    IStrategy *_strategy = (IStrategy *)this;
    this->data = (char *)malloc((strlen(data) + 1) * sizeof(char));
    strcpy(this->data, data);
    this->_strategy = _strategy;
}

void context_dtor(IStrategy *this){
    free(this)
}
