/*
write_file.c, Jira US: G1FP-6
Author: Haley Archer
Description: Writes a predefined result to a file.
*/

#include <stdio.h>
#include "write_file.h"

void writeFile(int a, int b, char op, int result) {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Unable to open output.txt for writing.\n");
        return;
    }

    fprintf(file, "%d %c %d = %d\n", a, op, b, result);
    fclose(file);
    printf("Calculation saved to output.txt\n");
}