#include <stdlib.h>
#include "lists.h"

/* add_nodeint_end - Function to add a new node at the end of a listint_t list 
 * @head: the head of a list
 * @n:the nth element
 *
 * Retuen: returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n) 
{

    listint_t *new_node = malloc(sizeof(listint_t));

    if (new_node == NULL) 
    {
        return NULL; // Return NULL if memory allocation fails
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) 
    {
        // If the list is empty, make the new node the head
        *head = new_node;
    } 
    else 
    {
        // Traverse the list to find the last node and append the new node
        listint_t *current = *head;

        while (current->next != NULL) 
	{
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}

