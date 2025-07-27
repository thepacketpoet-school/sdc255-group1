/* 
option_selector.c, Jira US: G1FP-2
Author: Cody Ackerman
Description: Handles routing based on user menu choice.
*/

#include <stdio.h>
#include "option_selector.h"
#include "read_file.h"
#include "calc1_addition.h"
#include "calc2_subtraction.h"
#include "write_file.h"

void optionSelector(int option) {
    static int lastA = 0, lastB = 0, lastResult = 0;
    static char lastOp = '?';

    switch(option) {
        case 1:
            readFile();
            break;
        case 2:
            printf("Enter two integers for addition, pressing 'enter' between integers: ");
            scanf("%d %d", &lastA, &lastB);
            lastResult = performAddition(lastA, lastB);
            lastOp = '+';
            break;
        case 3:
            printf("Enter two integers for subtraction, pressing 'enter' between integers: ");
            scanf("%d %d", &lastA, &lastB);
            lastResult = performSubtraction(lastA, lastB);
            lastOp = '-';
            break;
        case 4:
            if (lastOp == '?' || (lastA == 0 && lastB == 0)) {
                printf("No calculation performed yet to write.\n");
            } else {
                writeFile(lastA, lastB, lastOp, lastResult);
            }
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please select an option between 1 and 5.\n");
    }
}