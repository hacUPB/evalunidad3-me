#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "istrategy.h"


void __DoAlgorithm(void *data){
    object_t* object = (object_t *)data;

}

void object_ctor(object_t *this){

}

void object_dtor(object_t *this){
    free(this);
}

void object_S(object_t *this) {
    this->object_func(this);
}
