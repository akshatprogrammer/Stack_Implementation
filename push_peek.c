#include<stdio.h>
#define MAX 10
int main()
{
	int stack[MAX],top=-1,element;
	//PULL
	if(top==MAX-1)
		printf("Stack is Full");
	else
	{
		printf("Add: ");
		scanf("%d",&element);
		top++;
		stack[top]=element;
	}
	//PEEK
	if(top==-1)
		printf("Stack is empty");
	else
		printf("TOP element is %d",stack[top]);
		
	//DISPLAY
	if(top==-1)
		printf("Stack is empty");
	else
	{
		int temp = top;
		while(temp!=-1)
		{
			printf("\nElement: %d",stack[top]);
			temp--;
		}
	}
	//POP
	if(top==-1)
		printf("Stack is empty");
	else
	{
		printf("\nElement: %d",stack[top]);
		top--;
	}
}
