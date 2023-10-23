#include "sort.h"

/**
 * insertion_sort - function that sorts lists with
 * using doubly linked list
 * @list: array of elements to be sorted
 * no returnr
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *insertion;
	listint_t *temp
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    *current = (*list)->next;

    while (current != NULL)
    {
        *insertion = current;

        while (insertion->prev != NULL && insertion->n < insertion->prev->n)
        {
           *temp = insertion->prev;

            if (insertion->next != NULL)
                insertion->next->prev = temp;

            temp->next = insertion->next;
            insertion->next = temp;
            insertion->prev = temp->prev;

            if (temp->prev != NULL)
                temp->prev->next = insertion;
            else
                *list = insertion;

            temp->prev = insertion;

            insertion = temp;
            print_list(*list);
        }

        current = current->next;
    }
}

