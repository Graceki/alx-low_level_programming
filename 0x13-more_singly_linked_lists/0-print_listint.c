#include "lists.h"
/**
 * print_listint - Prints all the integers in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
num_nodes++;
h = h->next;
}
return (num_nodes);
}
