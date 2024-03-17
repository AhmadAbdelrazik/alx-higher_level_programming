#include "lists.h"


/**
* is_palindrome - check if the linked list is a palindrome
* @head: the linked list head.
*
* Return: return 1 if palindrome, else return 0
*/
int is_palindrome(listint_t **head)
{
    int arr[1000];
    int l = 0, r = 0;
    listint_t *cur;

    if (head == NULL || *head == NULL)
        return (0);

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
