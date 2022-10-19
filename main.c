#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "context.h"
#include "ConcreteStrategyA.h"

int main (int argc, char* argv[]){
    strategy_t *strategy = strategy_new();
    strategy_ctor(strategy);

    strategyA_t *strategyA_new();

    DoSomeBusinessLogic(strategy);
    DoSomeBusinessLogic((strategy_t*)strategyA);

    strategy_dtor(strategy);
    free(strategy);

    strategyA_dtor(strategyA);
    free(strategyA);

    return EXIT_SUCCESS;
}