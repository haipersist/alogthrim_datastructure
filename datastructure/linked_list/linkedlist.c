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
	int i;
	Node *head;
	head = (Node*)malloc(sizeof(Node));
	if(head == NULL)
		return;
	head->data = array[0];
	head->next = NULL;
	Node *cur = head;
	Node *Next;
	for(i=1;i<n;i++)
	{
		Next = (Node*)malloc(sizeof(Node));
		if(Next == NULL)
			return;
		Next->data = array[i];
		Next->next = NULL;
		cur->next = Next;
		cur = cur->next;
	}
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

Node *Delete(Node *head,char value)
{
	if(head == NULL)
		return NULL;
	if(head->next == NULL)
	{
		if(head->data == value)
		{
			free(head);
			return NULL;
		}
		else
			return head;
	}
	Node *pre;
	Node *current = head;
	while(current->next != NULL && current->data != value)
	{
		pre = current;
		current = current->next;
	}
	if(value == current->data)
	{
		if(current == head)
		{
			head = current->next;
			free(current);
		}
		else
		{
			pre->next = current->next;
			free(current);
		}
		
	}
	else
		printf("can not find it");
	return head;
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



void Print(Node *head)
{
	while(head!=NULL)
	{
		printf("%c\n",head->data);
		head = head->next;
	}
}

Node *Reverse(Node *head)
{
	if(head->next == NULL)
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
	if(head == NULL || k == 0)
		return NULL;
	else if(head->next == NULL)
		return head;
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
		printf("%d\n",before->data);
		return before;
	}

}

Node *sort(Node *head)
{
	if(head == NULL || head->next == NULL)
		return head;
	//then use maopao sort
	//
	return head;
}

// first do not know how many nodes,how to get middle node by only one traverse
Node *get_middle_node(Node *head)
{
	if(head->next == NULL || head->next->next == NULL)
		return head;
	Node *p = head;
	Node *q = head;
	while(q->next!=NULL)
	{
		if(q->next->next == NULL)
			break;
		p = p->next;
		q =q->next->next;
	}
	printf("%c,middle\n",p->data);
	return p;
}



int main(void)
{
	char array[]={'s','w','b','z','r'};
	int n = 5;
	Node *list = Create(array,n);
	Print(list);
	Node *mid = get_middle_node(list);
	//Print(list);
	//Print(Reverse(list));
	return 0;
}

	



















