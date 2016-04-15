#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define SIZE 10
static int top = -1;
static char array[SIZE];// prevent stack from being unlegally operation by others
void push(char data);
char pop();
char get_top();
int isEmpty();
int isFull();


int main(void)
{
	//char a = 'w';
	push('w');
	printf("%c\n",pop(array,SIZE));
}


int isEmpty(void)
{
	return top == -1;
}

int isFull(void)
{
	return top == SIZE - 1;
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


