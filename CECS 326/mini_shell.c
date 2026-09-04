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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
 
#define MAX_LINE 1024   /* max characters per input line   */
#define MAX_ARGS 64     /* max whitespace-separated tokens */

int main(void) { 
    char line[MAX_LINE];
    char *argv[MAX_ARGS];

    while (1) {
        printf("osh> ");
        fflush(stdout);
        // fgets keeps the trailing newline, so strip it
        if (fgets(line, sizeof(line), stdin) == NULL) {
            /* EOF (e.g. Ctrl-D) — exit the shell loop cleanly */
            printf("\n");
            break;
        }
    }

    return 0;
}
