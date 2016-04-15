#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0

typedef struct node
{
	struct node *next;
	char data;
}Node;

Node *Create_Empty()
{
	Node *ptr,*head;
	int i;
	head = (Node*)malloc(sizeof(Node));
	if(head == NULL)
		return NULL;
	head->next = NULL;
	return head;
}

Node *Create(char array[],int n)
{
	Node *ptr,*Next;
	Node *head = Create_Empty();
	int i;
	ptr = head;
	ptr->data;
	for(i=0;i<n;i++)
	{
		Next = (Node*)malloc(sizeof(Node));
		Next->data = array[i];
		ptr->next = Next;
		ptr = Next;
	}
	ptr->next = NULL;
	return head;
}



int Insert(Node *head,char new_value)
{
	Node *new;
	Node *current = head->next;

	// we think the linked list is ordered by ascend
	while(current != NULL && current->data < new_value)
		current = current->next;

	new = (Node*)malloc(sizeof(Node));
	if(new == NULL)
		return False;
	new->data = new_value;
	new->next = current->next;
	current->next = new;
	return True;
}


Node* Search(Node *head,char value)
{
	Node *current = head->next;
	while(current != NULL && current->data!=value)
		current = current->next;
	return current;
}

int Delete(Node *current,char value)
{
	Node *previous;
	while(current != NULL &&current->data != value)
	{
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
	return True;
}


int Get_Length(Node *head)
{
	Node *current = head->next;
	int len = 0;
	while(current!=NULL)
	{
		len += 1;
		current = current->next;
	}
	return len;
}


Node *Reverse(Node *head)
{
	Node *current = head->next;
	Node *Pre = NULL;
	Node *Next;
	while(current!=NULL)
	{
		Next = current->next;
		current->next = Pre;
		Pre = current;
		current = Next;
	}
	Node *newhead;
	newhead = (Node*)malloc(sizeof(Node));
	newhead->next = Pre;
	return newhead;
}

void Print(Node *head)
{
	Node *ptr = head->next;
	int pos = 1;
	while(ptr != NULL)
	{
		printf("data:%c,the element location is %d\n",ptr->data,pos);
		ptr = ptr->next;
		pos += 1;
	}
}

Node * New_Reverse(Node *head)
{
	if head->next == NULL
		return head;
	Node *pre = NULL;
	Node *next;
	while(head != NULL)
	{
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}

Node *Reverse_Recursively(Node *head)
{
	if(head->next==NULL || head==NULL)
		return head;
	Node *NewHead;
	NewHead = Reverse_Recursively(head->next);
	head->next->next = head;
	head->next = NULL;
	return NewHead;
}

Node *Print_Last_k(Node *head,unsigned int k)
{
	Node *behind = head;
	Node *before = head;
	if head == NULL || k == 0
		return NULL;
	else if (head->next == NULL)
		return head->m_nvalue;
	else
	{
		int pos = 0;
		while(behind!=NULL)
		{
			if(pos>=k-1)
				before = before->next;
			behind = behind->next;
			pos++;
		}
		printf("%d\n",before->m_nvalue);
		return before;
	}



int main(void)
{
	char array[]={'s','e','b','z','r'};
	int n = 5;
	Node *list = Create(array,n);
	Print(list);
	int l = Get_Length(list);
	printf("%d\n",l);
	Insert(list,'f');
	Print(list);
	Node *cur = Search(list,'q');
	if(cur!=NULL)
		printf("locat:%c\n",cur->data);
	else
		printf("Sorry,No this value\n");
	Node *L = Reverse(list);
	Print(L);
	Insert(L,'w');
	Print(L);
	return 0;
}

	



















