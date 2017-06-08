#define M 10			//Maximum space avaliable  i.e. Max M = 10
#include <stdio.h>
#include <conio.h>


typedef struct 
{
	int top;			//		Top 	of the stack
	int stack[M];		//		Actual stack
		
} StackType;			//		StackType to define new stack structure

void pushIntoStack(StackType *const s, int element)
{
	if(s->top<M-1)		//		M-1 = 9 not check for 10 beacuse if 10 then 
						//		it will try to insert at stack[10] which is not correct!
	{	
		s->stack[++s->top]=element;//	increment the  top first and then insert the element!
	}
	
	else				//		this means stack is already full cant push any element into the stack
	{
		printf("\nWarning: Stack is full!");
	}
}

int popOutofStack(StackType *const s)
{
	if (s->top<0)		//		stack is empty if top is less then 0 otherwise 
	{
		printf("\nWarning: Stack is empty!");
		return 0;
	}
	else				//		otherwise first return the element then decrement the top
	{
		return s->stack[s->top--];
	}
}

void traverseStack(StackType *const s)
{
	int i;				//		simple to traverse the whole stack
	
	if(s->top>=0)
	{
			i=s->top;
			i++;
			printf("\n%d elements are in stack!", i);
			for(i=0; i<=s->top; i++)
			{
				printf("\nElement: %d", s->stack[i]);
			}
	}
	
	else
		printf("\nWarning: Stack is empty!");
}
		
int main()
{
	StackType mystack;
	mystack.top=-1;
	
	char c='0';
	int temp=0;
	
	while(1)
	{
		
		
		printf("\nSelect any option:\nA)\tPush an element into stack\nB)\tPop an element out of stack\nC)\tDisplay all elements\nD)\tExit\nChoice: ");
		c=getche();

		
		switch(c)
		{
			case '1':
				case 'a':
					case 'A':	
					{
						printf("\nElement you want to push: ");
						scanf("%d", &temp);
						pushIntoStack(&mystack, temp);
					}
					break;
			case '2':
				case 'b':
					case 'B':	
					{
						temp=popOutofStack(&mystack);
						if(temp)
							printf("\nPopped element: %d", temp);
						
					}
					break;
					
			case '3':
				case 'c':
					case 'C':	
					{
						
						
						traverseStack(&mystack);
					}
					break;
					
			case '4':
				case 'd':
					case 'D':	
					{
						printf("\nExit!");
						break;
					}
					break;
					
			default:
				printf("Please press the Correct key!");
				
				
		}
	}
	return 0;
}
					
					
						
	
	
	
	
