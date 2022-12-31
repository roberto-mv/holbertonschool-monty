#include "monty.h"
/**
 * push - empuja elemento a una lista
 * @stack: puntero del primer elemento de la pila
 * @line_number: linea del numero
 * Return: vacio
 */

void push(stack_m **stack, unsigned int line_number)
{
	(void)line_number;

	if (input != NULL)
	{
		stack_m *ptr = malloc(sizeof(stack_m));

		ptr->n = atoi(input);
		ptr->next = (*stack);
		ptr->prev = NULL;

		if ((*stack) != NULL)
		{
			(*stack)->prev = ptr;
		}
		(*stack) = ptr;
	}
}
