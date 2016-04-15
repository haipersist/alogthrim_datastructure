#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0

typedef struct treenode {
	struct treenode *leftchild;
	struct treenode *rightchild;
	int data;
}BinNode,*BinTree;


BinNode *MakeNode(int data,BinNode *left,BinNode *right)
{
	BinNode *pNode;
	pNode=(BinNode *)malloc(sizeof(BinNode));
	if (pNode==NULL)
	{
		printf("out of memory\n");
		exit(1);
	}
	pNode->data=data;
	pNode->leftchild=left;
	pNode->rightchild=right;
	return pNode;
}


void Insert(BinTree tree,int data)
{
	int done = False;
	while(done == False)
	{
		if (tree==NULL)
		{
			tree->data = data;
			done =True;
		}
		else
		{
			if(data<=tree->data)
			{
				if(tree->leftchild==NULL)
				{
					BinNode *lp;
					lp=(BinNode*)malloc(sizeof(BinNode));
					if(lp!=NULL)
					{
						lp->data=data;
						tree->leftchild=lp;
						done=True;
					}
				}
				else
					tree=tree->leftchild;
			}
			else
			{
				if(tree->rightchild==NULL)
				{
					BinNode *rp;
					rp=(BinNode*)malloc(sizeof(BinNode));
					if(rp!=NULL)
					{
						rp->data=data;
						tree->rightchild=rp;
						done=True;
					}
				}
				else
					tree=tree->rightchild;
			}
		}
	}
}

BinNode *search(BinTree tree,int keyvalue)
{
	BinTree current=tree;
	while(tree!=NULL && tree->data!=keyvalue)
	{
		if(keyvalue<tree->data)
			current = tree->leftchild;
		else if(keyvalue>tree->data)
			current = tree->rightchild;
	}
	return current;
}

BinNode *find_min(BinTree tree)
{
	BinTree current = tree;
	while(current !=NULL && current->leftchild!=NULL)
		current=current->leftchild;
	return current;
}


BinNode *find_max(BinTree tree)
{
	BinTree current = tree;
	while(current !=NULL && current->rightchild!=NULL)
		current=current->rightchild;
	return current;
}

int is_LeafNode(BinTree tree)
{
	return (tree->leftchild==NULL && tree->rightchild==NULL);
}


void bst_remove_max(BinTree tree)
{
	if(tree==NULL)
		return;
	else
	{
		if(tree->rightchild==NULL)
		{
			BinTree oldtree=tree;
			tree=tree->leftchild;
			free(oldtree);
			return;
		}
		else
		{
			bst_remove_max(tree->rightchild);
		}
	}
}



BinTree Remove(BinTree root,int target)
{
	BinTree temp;
	if(root==NULL)
	{
		printf("the tree is empty\n");
		return NULL;
	}
	else
	{
		if(target<root->data)
		{
			root->leftchild=Remove(root->leftchild,target);
		}
		else 
		if(target>root->data)
		{
			root->rightchild=Remove(root->rightchild,target);
		}
		else 
		{
			if(root->leftchild && root->rightchild)
			{
				temp = find_min(root->rightchild);
				printf("%dzuixiao\n",root->data);
				root->data = temp->data;
				root->rightchild=Remove(root->rightchild,root->data);
			}
			else
			{
				temp = root;
				if(root->leftchild==NULL)
				{
					printf("%dleft\n",root->data);
					root = root->rightchild;
				}
				else if(root->rightchild==NULL)
				{
					printf("%dright\n",root->data);
					root = root->leftchild;
				}
				free(temp);
			}
		}
	}
	return root;
	printf("%dzuixiao\n",root->data);
}




				



void  tree_clear(BinTree root)
{
	if (root != NULL)
	{
		tree_clear(root->leftchild);
		tree_clear(root->rightchild);
		free(root);
		root=NULL;
	}
}


	
int  Get_tree_size(BinTree root)
{
	if (root == NULL)
		return -1;
	else if (root->leftchild == NULL && root->rightchild == NULL)
		return 0;
	else 
		return 1 + Get_tree_size(root->leftchild) + Get_tree_size(root->rightchild);
}



void PreOrder(BinNode *root)
{
	if (root != NULL)
	{
		printf("%d\n",root->data);
		PreOrder(root->leftchild);
		PreOrder(root->rightchild);
	}
}

void InOrder(BinNode *root)
{
	if (root != NULL)
	{
		InOrder(root->leftchild);
		printf("%d\n",root->data);
		InOrder(root->rightchild);
	}
}

void PostOrder(BinNode *root)
{
	if (root != NULL)
	{
		PostOrder(root->leftchild);
		PostOrder(root->rightchild);
		printf("%d\n",root->data);
	}
}



int main(void)
{
	BinNode *n4=MakeNode(7,NULL,NULL);
	BinNode *n0=MakeNode(3,NULL,NULL);
	BinNode *n1=MakeNode(8,n4,NULL);
	BinNode *n2=MakeNode(15,NULL,NULL);
	BinNode *n5=MakeNode(19,NULL,n2);
	BinNode *n3=MakeNode(9,n1,n5);
	BinNode *tree=MakeNode(6,n0,n3);
	//printf("%d\n", tree->leftchild->rightchild->data);
    //printf("%d\n",Get_tree_size(tree));
	//Insert(tree,7);
	PostOrder(tree);
	printf("\n\n");
	BinTree root=Remove(tree,8);
	PostOrder(root);
	return ;

}

