#include "lists.h"

/**
 * check_cycle - for loop check in LL
 * @list: linked list head
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *current;

	if (!list)
	{
		return (0);
	}
	slow = list;
	current = list->next;
	while (current && slow && current->next)
	{
		if (slow == current)
		{
			return (1);
		}
		slow = slow->next;
		current = current->next->next;
	}
	return (0);
}
