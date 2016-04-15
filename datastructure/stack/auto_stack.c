#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

static int top = -1;
static size_t stack_size = 0;
static char *array;// prevent stack from being unlegally operation by others
char create_stack(size_t size);
void destory_stack();
void push(char data);
char pop();
char get_top();
int isEmpty();
int isFull();


int main(void)
{
	//char a = 'w';
	create_stack(10);	
	push('w');
	push('a');
	printf("%c\n",pop());
	printf("%c\n",pop());
}

char create_stack(size_t size)
{
	assert(stack_size == 0);
	stack_size = size;
	array = (char*)malloc(sizeof(char)*stack_size);
	assert(array != NULL);
}

void destory_stack()
{
	assert(stack_size>0);
	stack_size = 0;
	free(array);
}



int isEmpty(void)
{
	assert(stack_size>0);
	return top == -1;
}

int isFull(void)
{
	assert(stack_size>0);
	return top == stack_size - 1;
}

void push(char data)
{
	assert(!isFull());
	top += 1;
	array[top] = data;
}

char pop()
{
	assert(!isEmpty());
	return array[top--];
}

char get_top()
{
	assert(!isEmpty());
	return array[top];
}


