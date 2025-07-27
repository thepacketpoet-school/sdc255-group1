/*
read_file.c, Jira US: G1FP-7
Author: Moriah Payne
Description: Reads and prints the contents of a file.
*/

#include <stdio.h>
#include "read_file.h"

void readFile() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Unable to open output.txt for reading.\n");
        return;
    }

    char line[256];
    printf("\n--- Contents of output.txt ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("\n------------------------------\n");
    fclose(file);
}