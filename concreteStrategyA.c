#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyA.h"

void __DoAlgorithmA(void *this){
    object_t *object = (object_t *)this;
    printf("strategy a");

}

object_t* DoAlgorithmA_new(){
    return (objA_t*)malloc(sizeof(objA_t));
}


void DoAlgorithmA_ctor(objA *this) {
    object_ctor((object_t *)this);
    strcpy(this->object.Data);
    this->DoAlgorithm.object_S = __objectA;
   
}

void DoAlgorithmA_dtor(objA *this) {
    object_dtor((object_t *)this);
}
