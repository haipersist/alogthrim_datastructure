#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef struct node
{
	char data;
	struct node *next;
}Node;

static Node *Stack = NULL;
void destory_stack();
void push(char data);
char pop();
char get_top();
int isEmpty();
int isFull();


int main(void)
{
	//char a = 'w';
	push('w');
	push('a');
	printf("%c\n",get_top());
	pop();
	printf("%c\n",get_top());
}


void destory_stack()
{
	while (!isEmpty())
		pop();

}


int isEmpty(void)
{
	return Stack == NULL;
}

int isFull(void)
{
	return 0;
}

void push(char data)
{
	//assert(!isFull());
	Node *stack_node = (Node*)malloc(sizeof(Node));
	assert(stack_node != NULL);
	stack_node->data = data;
	stack_node->next = Stack;
	Stack = stack_node;
}

char pop()
{
	assert(!isEmpty());
	Node *first = Stack;
	Stack = first->next;
	free(first);
}

char get_top()
{
	assert(!isEmpty());
	return Stack->data;
}


