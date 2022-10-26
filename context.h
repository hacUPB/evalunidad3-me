#ifndef CONTEXT_H_
#define CONTEXT_H_


typedef struct{

    char *data;
    IStrategy *_strategy;
}IStrategy;

void SetStrategy(IStrategy *);

void DoSomeBussinesLogic(IStrategy *);

void context_ctor(IStrategy *);

void context_dtor(IStrategy *);

#endif
