#include <iostream>
#inlcude <conio.h>

class TreeNode;
class NodeLink
{
	public:
		TreeNode *childNode;
		NodeLink *nextLink;
	
		
		
		
	public:
	
	
	NodeLink()
	{
		childNode=NULL;
		nextLink=NULL;
		count++;
	}
	
	NodeLink(TreeNode *ptr)
	{
		childNode=ptr;
		nextLink=NULL;
		count++;
	}
	
	
	
	
};


class TreeNode
{
	private:
		int data;
		char L;
		
		NodeLink link;
	
	
	public:
		
		TreeNode()
		{
			data=0;
		
		}
		
		TreeNode(char r, int data)
		{
			this->data=data;
			L=r;
		}
		
		
		bool AddNewChild(int data)
		{
			
			
			
			
		}
		
		int display()
		{
			return this->data;
		}
};
		
	
	
	
	
