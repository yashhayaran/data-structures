#include <iostream>

using namespace std;
typedef struct Node
{
	int data;
	Node *next;
}__t;
static int n=1;

class LinkedList
{
	public:
		Node *head;
		
		LinkedList(int data)
		{
			head = new Node;
			head->data=data;
			head->next=NULL;
		}
		
		void insert(int data, Node *head)
		{
	
			if(head->next!=NULL)
			{
				insert(data, head->next);
			}
			else
			{
				head->next=new Node;
				head->next->data=data;
				head->next->next=NULL;
			}
		}
		
		void traverse(Node *node)
		{
			if(node)
			{
				cout<<"\nElement: "<<node->data;
				traverse(node->next);
			}
			else 
				return;
		}
		
		void reverse(Node * node)
		{
			if(node->next)
			{
				reverse(node->next);
				node->next->next=node;
				node->next=NULL;
	
			}
			
			else
			{
				head=node;
			}
		}
		
		Node * findNend( Node *node)
		{
			if(node->next)
			{
				Node *o= findNend( node->next);
				
				
				if(n && n!=1)c
				{
					n--;
					return NULL;
				}
				else if(o)
					return o;
				
				else
					return node;
			}
			
			
			
			else
			{
				if(n==1)
				return node;
				n--; n--;
				return NULL;
			}
				
		}
		
};


int main()
{
	LinkedList list(25);
	
	list.insert(35, list.head);
	list.insert(36, list.head);
	list.insert(68, list.head);
	
	list.traverse(list.head);
	list.reverse(list.head);
	list.traverse(list.head);
	
	Node *u=list.findNend(list.head);
	if(u)
	{
		cout<<"\nData: "<<u->data;
	}
	else
		cout<<"N is large";
	
		
	return 0;
}
	
