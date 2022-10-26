#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyB.h"


void __DoAlgorithmB(void *this){
    object_t *object = (object_t *)this;
    printf("strategy b");

}

object_t* DoAlgorithmB_new(){
    return (objA_t*)malloc(sizeof(objA_t));
}


void DoAlgorithmB_ctor(objB *this) {
    object_ctor((object_t *)this);
    strcpy(this->object.Data);
    this->DoAlgorithm.object_S = __objectB;
   
}

void DoAlgorithmB_dtor(objB *this) {
    object_dtor((object_t *)this);
}
