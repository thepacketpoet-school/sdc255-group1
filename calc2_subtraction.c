/*
calc2_subtraction.c, Jira US: G1FP-4
Author: Jaden Covington, Haley Archer
Description: Performs subtraction and stores result in global variable.
*/

#include <stdio.h>
#include "calc2_subtraction.h"

int performSubtraction(int a, int b) {
    int result = a - b;
    printf("Subtraction Result: %d - %d = %d\n", a, b, result);
    return result;
}
