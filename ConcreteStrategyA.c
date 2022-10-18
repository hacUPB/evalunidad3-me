#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ConcreteStrategyA.h>

void __strategyA(void *this){
    strategy_t* list = (strategy_t*)this;
    //buscar la forma de que imprima la lista

}

strategyA_t* strategyA_new(){
    return (strategyA_t*)malloc(sizeof(strategyA_t));
}

void __strategyA_ctor(strategyA_t* this){
    strategy_ctor((strategy_t *)this);
    //strcpy(this->strategy.)
}

void __strategyA_dtor(strategyA_t* this){
    strategy_dtor((strategy_t*)this);
}