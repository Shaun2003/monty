#include "monty.h"

/**
 * f_pstr - print string starting at top of stack
 * followed by new
 * @head: stack
 * @counter: line_num
 * Return:
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
