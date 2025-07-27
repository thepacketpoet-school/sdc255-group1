/*
calc1_addition.c, Jira US: G1FP-3
Author: Haley Archer
Description: Performs addition and stores result in global variable.
*/

#include <stdio.h>
#include "calc1_addition.h"

int performAddition(int a, int b) {
    int result = a + b;
    printf("Addition Result: %d + %d = %d\n", a, b, result);
    return result;
}