Node *Delete(Node *head,int num)
{
	assert(head!=NULL);
	Node *p1,p2;
	p1 = head;
	while(num!=p1->data&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if(num==p1->data)
	{
		if(p1==head)
		{
			head = p1->next;
			free(p1);
		}
		else 
		{
			p2->next = p1->next;
			free(p1);
		}
	}
	else
		printf("No eqals Node\n");
	return(head);
}




