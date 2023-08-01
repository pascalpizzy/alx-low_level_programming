#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/** 
 * Function print_listint: to print all elements of a listint_t list
 * Return: The total numbers of the nodes 
 */
size_t print_listint(const listint_t *h) {
    size_t count = 0;

    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}

