#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef unsigned int SIZE;


typedef struct node
{
	char *data;//data can be any type,int,float and so on.
	struct node *next;
}ListNode,*Nodelocat;


typedef Nodelocat List;


typedef struct table
{
	int tablesize;
	Nodelocat *lists;
}HashArray,*HashTable;


int isprime(int data)
{
	if(data == 1)
		return;
	int k = (int)sqrt(data);
	int i;
	int found = 1;
	for(i=2;i<k;i++)
	{
		if(data%i==0)
		{
			found =0;
			break;
		}
	}
	return found;
}



SIZE Hash(const char *key,int len)
{
	SIZE Hashval = 0;
	while(*key !='\0')
		Hashval = (Hashval << 5) + *key++;
		//according to Horner rule
	return Hashval % len;
}

HashTable InitTable(int tablesize)
{
	if(tablesize<0)
		return NULL;
	HashTable H;
	H = (HashArray*)malloc(sizeof(HashArray));
	if(H == NULL)
		return NULL;
	while(!isprime(tablesize))
		tablesize += 1;
	H->tablesize = tablesize;
	H->lists = malloc(sizeof(ListNode)*H->tablesize);
	if(H->lists==NULL)
		return NULL;
	int i;
	for(i=0;i<H->tablesize;i++)
	{
		H->lists[i] = (ListNode*)malloc(sizeof(ListNode));
		if(H->lists[i]==NULL)
			printf("out of space\n");
		else
			H->lists[i]->next == NULL;
	}

	return H;
}
 

Nodelocat Find(HashTable H,char *key)
{
	Nodelocat p;
	List L;
	L = H->lists[Hash(key,H->tablesize)];
	p = L->next;
	while(p!=NULL && strcmp(p->data,key)!=0)
		p = p->next;
	return p;
}

void insert(HashTable H,char *key)
{
	List L;
	L = Find(H,key);
	if(L==NULL)
	{
		List New = (ListNode*)malloc(sizeof(ListNode));
		if(New==NULL)
			printf("out of space\n");
		else
		{
			L = H->lists[Hash(key,H->tablesize)];
			New->next = L->next;
			L->next = New;
			New->data = key;
		}
	}
}


int main(void)
{
	HashTable H;
	int size = 10;
	H = InitTable(size);
	char *key = "haibo";
	insert(H,key);
	List L;
	L = Find(H,key);
	printf("%s,haha\n",L->data);
	return 0;
}





	

	
		
	


