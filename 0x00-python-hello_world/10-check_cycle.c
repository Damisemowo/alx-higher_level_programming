#include "lists.h"

/**
* check_cycle - Check if a singly linked list has a cycle
* @list: Pointer to the head of the list
*
* Return: 0 if there is no cycle, 1 if there is a cycle
*/

int check_cycle(listint_t *list)
{
	listint_t *slow, *fastest;

	slow = list;
	fastest = list;

	while (fastest && fastest->next)
	{
		slow = slow->next;
		fastest = fastest->next->next;

		if (slow == fastest)
			return (1);
	}

	return (0);
}
