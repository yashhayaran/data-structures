#include <stdio.h>
#include <conio.h>


struct TreeNod
{
	char name;
	struct NodeLin
	{
		
		struct TreeNod *childNode;
		struct NodeLin *linkNode;
	
	}
	Link;
	
	
} RootNode;

typedef struct TreeNod TreeNode;
typedef struct NodeLin NodeLink;

void initiateTree(char a)
{
	RootNode.name=a;
	RootNode.Link.childNode=NULL;
	RootNode.Link.linkNode=NULL;
}

TreeNode * searchNode(TreeNode *node, char a)	//
{
	printf("\nNode: %c", node->name);
	TreeNode *res=NULL;
	
	NodeLink *next =  &node->Link;;
	TreeNode *child=node->Link.childNode;
	
	if (node->name == a)
		return node;
	

	for(;;)
	{
		if(next->childNode!=NULL)
			res=searchNode(next->childNode, a);
		if(next->linkNode!=NULL && res==NULL)
			next=next->linkNode;
		else
			break;
	}
		
				
	
	return res;
}

void treeInsert(char parentName, char newName)
{
	TreeNode *parent=searchNode(&RootNode, parentName);
	TreeNode *n=NULL;
	if(parent==NULL)
	{
		printf("\nParent Not Found!");
	}
	else
	{
		NodeLink *p=&parent->Link;
		//printf("\nParent Found!");
		
		while(p->linkNode!=NULL)
		{
			p=p->linkNode;
		}
		
		p->linkNode= (NodeLink *)malloc(sizeof(NodeLink));
		p=p->linkNode;
		p->linkNode=NULL;
		p->childNode=(TreeNode *)malloc(sizeof(TreeNode));
		n=p->childNode; 
		
		
		
		
		

		n->name=newName;
		n->Link.childNode=NULL;
		n->Link.linkNode=NULL;
	}
}
			

	
void main()
{
	
	initiateTree('A');
	printf("\nAdd: %d", searchNode(&RootNode, 'A'));
		treeInsert('A', 'B');
		treeInsert('A', 'C');
		treeInsert('B', 'E');
		treeInsert('C', 'D');
		treeInsert ('A','e');
		treeInsert('E', 'F');
	
	searchNode(&RootNode, 'F');
	
	getch();
	fflush(stdin);
	
}


	





	
