#include<stdio.h>
#include<stdlib.h>
#include<time.h>



typedef struct node {
    int data;
    struct node *next;
}Node;


void print_chain(Node *L)
{
    if(L==NULL||L->next==NULL)
        return;
    Node *cur = L->next;
    while(cur!=NULL)
    {
        printf("%d,",cur->data);
        cur = cur->next;
    }
    printf("\n");
}



Node *create_linkedlist(int n)
{
    int i;
    srand(time(0));
    Node *head;
    head = (Node*)malloc(sizeof(Node));
    if(head==NULL)
        return;
    head->next = NULL;
    Node *r = head;
    Node *p;
    for(i=0;i<n;i++)
    {
        p = (Node*)malloc(sizeof(Node));
        if(p==NULL)
            return;
        p->data = i+1;
        r->next = p;
        r = p;
    }
    r->next = NULL;
    return head;
}

int get_length(Node *L)
{
    int length = 0;
    if(L==NULL)
        return 0;
    Node *cur = L;
    while(cur!=NULL)
    {
        length += 1;
        cur = cur->next;
    }
    return length;
}


Node *delete_node(Node *L,int index)
{
    int length = get_length(L);
    if(index<1 || index >length)
        return;
    Node *cur = L;
    int i = 1;
    while(cur->next!=NULL && i<index)
    {
        cur = cur->next;
        ++i;
    }
    Node *p = cur->next;
    cur->next = p->next;
    printf("delete item:%d\n",p->data);
    free(p);
    return L;
}

Node *insert_node(Node *L,int index,int data)
{
    int i = 1;
    Node *insertNode = (Node*)malloc(sizeof(Node));
    if(insertNode==NULL)
        return;
    Node *p = L;
    while(p->next!=NULL && i<index)
    {
        p = p->next;
        ++i;
    }
    if(!p || i>index)
        return;
    insertNode->data = data;
    insertNode->next = p->next;
    p->next = insertNode;
    return L;
}








int main(void)
{
    int n = 10;
    Node *chain = create_linkedlist(n);
    print_chain(chain);
    printf("\n");
    Node *del = delete_node(chain,3);
    print_chain(del);
    printf("\n");
    Node *ins = insert_node(chain,3,100);
    print_chain(ins);
    return 0;
}



