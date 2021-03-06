#include<stdio.h>

typedef struct node
{
	int value;
	struct node *next;
}Node,*NodeList;


NodeList Create(n)
{
	int i;
	Node *head;
	Node *curr;
	head = (NodeList)malloc(sizeof(Node));
	if(head == NULL)
		return;
	head->value = 0;
	head->next = head;
	curr = head;
	for(i = 1;i<n;i++)
	{
		Node *temp = (Node*)malloc(sizeof(Node));
		if(temp == NULL)
			break;
		temp->value = i;
		temp->next = curr->next;
		curr->next = temp;
		curr = temp;
	}
	return head;
}



void Print(Node *head,int n)
{
	int i = 0;
	while(i<n)
	{
		printf("%d\n",head->value);
		i++;
		head = head->next;
	}
}


int main(void)
{
	int n = 5;
	NodeList head = Create(n);
	Print(head,n);
	return 0;
}





