#include "lists.h"

int check_cycle(listint_t *list) {
	if (list == NULL) {
		return 0;
	}

	listint_t *sp = list;
	listint_t *fp = list;

	while (fp != NULL && sp != NULL) {
		sp = sp->next;
		fp = fp->next;

		if (fp != NULL)
			fp = fp->next;

		if (sp == fp) {
			return 1;
		}
	}

	return 0;
}
