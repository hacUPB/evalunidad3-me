#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyA.h"

void __strategyA(void *this){
    strategy_t *list = (strategy_t *)this;
    //buscar la forma de que imprima la lista

}

strategyA_t* strategyA_new(){
    return (strategyA_t*)malloc(sizeof(strategyA_t));
}

void strategyA_ctor(strategyA_t* this){
    strategy_ctor((strategy_t *)this);
    //strcpy(this->strategy.list, "1");
    //this->strategy._func
}

void strategyA_dtor(strategyA_t* this){
    strategy_dtor((strategy_t*)this);
}