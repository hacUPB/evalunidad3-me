#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "istrategy.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include "context.h"

int main (int argc, char* argv[]){

    object_t *object = object_new();
    object_ctor(object);

    DoAlgorithmA_t *objA = DoAlgorithmA_new();
    DoAlgorithmA_ctor(objA);

    DoAlgorithmB_t *objB = DoAlgorithmtB_new();
    DoAlgorithmB_ctor(objB);

    object_S(object);
    object_S((object_t *)objA);
    object_S((object_t *)objB);

    object_dtor(object);
    free(object);

    DoAlgorithmA_dtor(objA);
    free(objA);

    DoAlgorithmB_dtor(objB);
    free(objB);

    return EXIT_SUCCESS;
}
