#include <stdio.h>
#include <stdlib.h>

int stk[10];
int top=-1;
void push();
void pop();
void display();

int main()
 {
	int n;
	printf("Enter the choice");
	scanf("%d", &n);
	switch(n)
    	{
    case 1:
	push();
	break;
	case 2:
	pop();
	break;
	case 3:
	display();
	break;  		
	}	
	return 0;
}
void push()
{
int a;
if (top== sizeof(stk[10]))
{
	printf("The stack is overflow");
	
}
else
{
	scanf("%d", &a);
	top++;
	stk[top]=a;
}
}
void pop()
{
	int b;
	if(top<=-1)
	{
	printf("the stack is underflow");	
	}
	else
	{
	scanf("%d", &b);
	top--;
	stk[top]=b;
		
	}
}
void display()
{
	if(top==-1)
	{
		printf("the stack is empty");
	}
	else
	{
    int s;
	for(s=0;s==top;s++)
	{
	scanf("%d",stk[s]);
	printf("The Stack is :%d\n" ,stk[s]);	
	}	
	}
}
