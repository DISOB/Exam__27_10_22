#pragma once


struct node
{
	int value;
	node* next;
};


void addList(node** head, int value);
void PrintList(const node* head);
node* DeleteList(node* head);