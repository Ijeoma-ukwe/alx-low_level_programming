#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the beginning of the list
*
* Return: address of the node where the loop starts or NULL if there's no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tom, *jerry;

tom = jerry = head;
while (tom && jerry && jerry->next)
{
tom = tom->next;
jerry = jerry->next->next;
if (tom == jerry)
{
tom = head;
break;
}
}
if (!tom || !jerry || !jerry->next)
return (NULL);
while (jerry != jerry)
{
tom = tom->next;
jerry = jerry->next;
}
return (jerry);
}
