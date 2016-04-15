#include "double_linked.h"
#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0


int main(void)
{
}


Node *Create()
{
	Node *head;
	head = (Node*)malloc(sizeof(Node));
	if(head == NULL)
		return NULL;
	head->next = NULL;
	head->pre == NULL;
	return head;
}


int isEmpty(Node *List)
{
	return List->next == NULL;
}


Position Find(Node *List,char value)
{
	Node *current = List->next;
	while(current != NULL && current->value != value)
		current = current->next;
	return current;
}

int Insert(Node *List,char value)
{
	Node *current;
	Node *Next;
	Node *newnode;
	current = List->next;
	while(current!=NULL && current->value<value)
		current = current->next;
	newnode = (Node*)malloc(sizeof(Node));
	if(newnode==NULL)
		return -1;
	newnode->value = value;
	newnode->next = current;
	newnode->pre = current->pre;
	current->pre->next = newnode;
	current->pre = newnode;
	return 1;
}

	
