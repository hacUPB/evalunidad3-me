#ifndef CONTEXT_H_
#define CONTEXT_H_


typedef void(*strategy_func_t)(void *);

typedef struct {
    char *list;
    strategy_func_t strategy_func;

}strategy_t;

strategy_t *strategy_new();

void strategy_ctor(strategy_t*);
void strategy_dtor(strategy_t*);

void DoSomeBusinessLogic(strategy_t*);

#endif