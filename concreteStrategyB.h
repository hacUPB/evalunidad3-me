#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_

#include "istrategy.h"

typedef struct {
    object_t object;
}objectB_t;

objectB_t *DoAlgorithmB_new();

void DoAlgorithmBctor(objectB_t *);

void DoAlgorithmB_dtor(objectB_t *);

#endif
