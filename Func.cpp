#include "Func.h"
#include <iostream>


void addList(node** head, int value)
{
	while (*head)
	{
		head = &(*head)->next;
	}

	node* new_head = new node;
	new_head->value = value;
	new_head->next = nullptr;
	(*head) = new_head;
}

void PrintList(const node* head)
{
	if (head)
	{
		std::cout << head->value << " ";
		PrintList(head->next);
	}
}

node* DeleteList(node* head)
{
	if (head)
	{
		DeleteList(head->next);
		free(head);
	}
	return NULL;
}