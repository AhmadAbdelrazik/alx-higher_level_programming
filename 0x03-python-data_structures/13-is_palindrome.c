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
	int length = 0;
	listint_t *cur;
	int *arr;
	int l = 0;
	int r = 0;

	if (head == NULL || *head == NULL)
		return (1);

	cur = *head;

	while (cur != NULL)
	{
		length++;
		cur = cur->next;
	}

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
		return (1);

	cur = *head;

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
