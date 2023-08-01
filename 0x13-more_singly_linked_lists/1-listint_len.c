#include <stddef.h>
#include "lists.h"

/**
 *main - Function to count the number of elements in a listint_t list
 *
 * Return: return 0 if well executed. 
 */
size_t listint_len(const listint_t *h) 
{

    size_t count = 0;

    while (h != NULL) 
    {
        count++;
        h = h->next;
    }

    return count;
}

