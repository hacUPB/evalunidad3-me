#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_

#include "istrategy.h"

typedef struct {
    object_t object;
}objectA_t;

objectA_t *DoAlgorithmA_new();

void DoAlgorithmA_ctor(objectA_t *);

void DoAlgorithmA_dtor(objectA_t *);

#endif
