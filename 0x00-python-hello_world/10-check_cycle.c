#include "lists.h"

/**
 * check_cycle - check if there is a cycle in the linked list
 * @list: the linked list head
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *fast = list;
    listint_t *slow = list;

    if (list == NULL)
        return (2);

    while (fast != NULL && slow != NULL)
    {
        if (fast->next == NULL)
            fast = NULL;
        else
            fast = fast->next->next;

        slow = slow->next;

        if (fast == slow && fast != NULL)
            return (1);
    }

    return (0);
}

