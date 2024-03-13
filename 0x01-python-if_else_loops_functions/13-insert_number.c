#include "lists.h"

#include <stdlib.h>

/**
 * insert_node - insert a node in a sorted linked list.
 *
 * @head: the linked list head.
 * @number: the value to be placed in the new node.
 *
 * Return: return the node's address if Successful, else return NULL.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode;
	listint_t *cur;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	cur = *head;
	newNode->n = number;

	if (cur != NULL && cur->n > newNode->n)
	{
		newNode->next = cur;
		*head = newNode;
		return (newNode);
	}
	else if (cur == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (cur->next != NULL && cur->next->n <= newNode->n)
		cur = cur->next;

	newNode->next = cur->next;
	cur->next = newNode;

	return (newNode);
}
