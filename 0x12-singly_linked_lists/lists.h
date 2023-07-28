#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* struct list_s - linked list
* @str: string
* @len: length
* @next: point
*
* Description: singly linked node
* for project
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

int _putchar(char c);
int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void _constructor(void) __attribute__ ((constructor));

#endif