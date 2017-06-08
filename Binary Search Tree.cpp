#include <iostream>

typedef struct Node
{
	int val;
	Node *left;
	Node *right;
}t;

class BST
{
	public:
		Node rootNode;
		
		BST(int val)
		{
			rootNode.val=val;
			rootNode.left=NULL;
			rootNode.right=NULL;
		}
		
		/*Node *search(int val, Node *searchitem)
		{
			if(searchitem->val>val && searchitem->left!=NULL)
			{
				return search(val, searchitem->left);
			}
			else if(searchitem->val<val && searchitem->right!=NULL)
			{
				return search(val, searchitem->right);
			}
			else if(searchitem->val == val)
			{
				return searchitem;
			}
			
			else
				return NULL;
		}*/
		
		
		
		
		void insert(int val, Node *insertNode)
		{
			if(insertNode->val>val && insertNode->left == NULL)
			{
				
				Node *newleft= new Node();
				newleft->val=val;
				insertNode->left=newleft;
				
				
			}
			
			else if(insertNode->val<val && insertNode->right == NULL)
			{
				Node *newright=new Node();
				
				
				
				newright->val=val;
				insertNode->right=newright;
			}
			
			else if (insertNode->val>val && insertNode->left !=NULL)
			{
				insert(val, insertNode->left);
			}
			else if (insertNode->val<val && insertNode->right!=NULL)
			{
				insert(val, insertNode->right);
			}
		
			else
			{
				printf("This %d value already exists in tree!", val);
			}
		}
		
		void traverse(Node *node)
		{
			if(node)
			{
				printf("\nNode Data: %d", node->val);
				traverse(node->left);
				traverse(node->right);
			}
			return;
		}
		
		Node * search(int val, Node *node)
		{
			if(node->val==val)
				
				return node;
			
			else if (val<node->val && node->left)
				return search(val, node->left);
			
			else if (val>node->val && node->right )
				return search(val, node->right);
				
			else
				
				return NULL;
		}
	
	
	
	
	
	void swap(Node *node)
	{
		
		Node *temp=node->left;
		node->left=node->right;
		node->right=temp;
	}
	
	
	void invert(Node *node)
	{
		if(node)
		{
			invert(node->left);
			invert(node->right);
			swap(node);
			
		}
	}
			
			
				
		
};

int main()
{
	
	BST tree(4);
	tree.insert(2, &tree.rootNode);
	tree.insert(6, &tree.rootNode);
	tree.insert(7, &tree.rootNode);
	tree.insert(8, &tree.rootNode);
	tree.insert(1, &tree.rootNode);
	//tree.insert(3, &tree)
	tree.insert(5, &tree.rootNode);
	
	Node *r=tree.search(6, &tree.rootNode);
	printf("Found %d", r->val);
	
	tree.traverse(&tree.rootNode);
	tree.invert(&tree.rootNode);
	printf("\nInverted Version:");
	tree.traverse(&tree.rootNode);
	
	
	return 0;
}

