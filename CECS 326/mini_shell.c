/*
 * mini_shell.c
 *
 * A small command-line process launcher (a "mini shell") that demonstrates
 * basic UNIX/Linux process management: fork(), execvp(), and waitpid().
 *
 * CECS 326 - PA#1
 * Edgar Restor
 * Version 1.0.0
 * 
 * Version change note:
 * 1.0.0: Initial code
 */

#include <string.h>
#include <unistd.h>

#define MAX_LINE_LEN 1024   // max length of a command line we will read
#define MAX_ARGS     64     // max number of whitespace-separated tokens

#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];

    printf("shell> ");
    fflush(stdout);

    while (fgets(input, sizeof(input), stdin) != NULL) {
        // fgets keeps the trailing newline, so strip it
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            break;
        }

        printf("You typed: %s\n", input);
        printf("shell> ");
        fflush(stdout);
    }

    return 0;
}