#include "list.h"
/**
 * print_listint - prints all the elements of a linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *head)
{
size_t count = 0;
while (head)
{
printf("%d\n", head->n);
count++;
head = head->next;
}
return (count);
}
