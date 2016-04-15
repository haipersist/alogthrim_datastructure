#ifndef _DOUBLE_LINKED_H
typedef Node *Position;

int isEmpty(Node *List);

Position Find(Node *List,char value);

void Delete(Node *List,char value);

void Insert(Node *List,char value);


typedef struct node
{
	char value;
	struct node *next;
	struct node *pre;
}Node;


#endif

