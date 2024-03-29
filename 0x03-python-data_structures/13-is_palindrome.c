#include "lists.h"
#include <stdlib.h>


/**
 * is_palindrome - check if the linked list is a palindrome
 * @head: the linked list head.
 *
 * Return: return 1 if palindrome, else return 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *cur;
	int *arr;
	int l = 0;
	int r = 0;

	if (head == NULL || *head == NULL)
		return (1);

	cur = *head;

	while (cur != NULL)
	{
		r++;
		cur = cur->next;
	}

	arr = malloc(sizeof(int) * r);

	if (arr == NULL)
		return (1);

	cur = *head;

	r = 0;
	while (cur != NULL)
	{
		arr[r] = cur->n;
		r++;
		cur = cur->next;
	}
	r--;

	while (l < r)
	{
		if (arr[l] != arr[r])
			return (0);
		l++;
		r--;
	}
	
	return (1);
}
