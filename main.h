#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE 1024

size_t	_strlen(const char *s);
char	*_strchr(const char *s, int c);
char	*_strcpy(char *dst, const char *src);
int		_strcmp(const char *s1, const char *s2);
size_t	_strspn(const char *s, const char *accept);
char	*_strdup(const char *s);
size_t	_strcspn(const char *s, const char *reject);
char	*_strtok(char *s, const char *d);
char	**_split(const char *s, const char *d);
ssize_t	_print(const char *s);
char	*_getline(const char *prompt);

void	free_token_array(char **tokens);
char	**get_line_tokens(const char *prompt, const char *d);
void	print_tokens(char **tokens);

char	*_getenv(const char *name);
void	print_path();
void	exec_cmd(char **tokens);

#endif
