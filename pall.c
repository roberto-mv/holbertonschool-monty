#include "monty.h"
/**
 * pall - imprime elementos de lista vinculada
 * @stack: puntero al primer elemento de la pila
 * @line_number: linea del numero
 * Return: vacio
 */

void pall(stack_m **stack, unsigned int line_number)
{
	stack_m *ptr;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
		return;
	ptr = *stack;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
