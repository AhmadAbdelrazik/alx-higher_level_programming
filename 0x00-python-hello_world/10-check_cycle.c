#include "lists.h"

/**
 * check_cycle - check if the list contains a cycle
 * @list: the list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	if (list == NULL)
		return (0);

	listint_t *sp = list;
	listint_t *fp = list;

	while (fp != NULL && sp != NULL)
	{
		sp = sp->next;
		fp = fp->next;

		if (fp != NULL)
			fp = fp->next;

		if (sp == fp)
			return (1);
	}

	return (0);
}
