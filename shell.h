#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void print(const char *str);
int strLength(const char *str);

void displayPrompt(void);
int readCommand(char **command);
void executeCommand(const char *command);

#endif
