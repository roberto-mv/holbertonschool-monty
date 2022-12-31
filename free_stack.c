#include "monty.h"
/**
* free_stack - libera lista
* @head: cabeza de la pila
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
