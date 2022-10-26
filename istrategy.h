#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_


typedef void(*object_func_t)(void *);

typedef struct {
    object_func_t object_func;
} object_t;


void object_ctor(object_t *);
void object_dtor(object_t *);

void object_S(object_t *);

#endif
