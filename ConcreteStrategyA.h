#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_
#include "context.h"

typedef void(*strategy_func_t)(void *);

typedef struct {
    strategy_t list;
}strategyA_t;

strategyA_t *strategyA_new();

void strategyA_ctor(strategyA_t *);

void strategyA_dtor(strategyA_t *);

#endif