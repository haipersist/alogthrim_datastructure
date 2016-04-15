typedef struct node
{
	int value;
	struct node *left;
	struct node *right;
}Node;


void MirrorTree(Node *tree)
{
	if(tree == NULL)
		return;
	if(tree->left==NULL && tree->right==NULL)
		return;
	Node *temp;
	temp = tree->left;
	tree->left = tree->right;
	tree->right = temp;
	if(tree->left!=NULL)
		MirrorTree(tree->left);
	if(tree->right!=NULL)
		MirrorTree(tree->right);

}


