/* 
main.c, Jira US: G1FP-4
Author: Haley Archer
Description: Entry point of the program. Presents the main menu and delegates
tasks to other functional modules via the option_selector function. 
*/
#include <stdio.h>
#include "menu.h"
#include "option_selector.h"

int main() {
    int option;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &option);
        optionSelector(option);
    } while (option != 5);  // 5 is Exit
    return 0;
}