#include "../include/warfunct.h"
#include <stdio.h>

#define EXAMPLE_ROLL 6

int main(int argc, char *argv[]) {
    printf("Welcome to Wargame Rollstats \n");
    const float EXAMPLE_RESULT = hit_perc_d6(EXAMPLE_ROLL);
    printf("Success percentage for example roll %d is %3.2f%%\n", EXAMPLE_ROLL, EXAMPLE_RESULT);
    return 0;
}