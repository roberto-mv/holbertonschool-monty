#include "monty.h"
/**
 * pint - imprime valor de la pila
 * @stack: puntero de la pila
 * @line_number: linea del numero
 * Return: vacio
 */
void pint(stack_m **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		dprintf(STDOUT_FILENO, "%d\n", (*stack)->n);
}
