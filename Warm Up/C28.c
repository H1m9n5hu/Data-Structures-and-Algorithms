// Implementation of Stack with Linked List or Dynamic Memory Allocation...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};
struct node *stack = 0, *newnode, *temp;

void push(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(stack == 0)
    {
        stack = newnode;
        newnode->next = 0;
    }
    else
    {
        newnode->next = stack;
        stack = newnode;
    }
}

void pop()
{
    temp = stack;
    if(stack == 0)
        printf("Underflow Condition\n");
    else
    {
        stack = stack->next;
        free(temp);
    }
}

void peek()
{
    if(stack == 0)
        printf("Stack is Empty.");
    else
        printf("Top Element is %d.", stack->data);
}

void display()
{
    temp = stack;
    if(stack == 0)
        printf("Stack is Empty.");
    else
        while(temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
}

int main()
{    
    int choice, x;
    do
    {
        printf("1.push()\n2.pop()\n3.peek()\n4.display()\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the Data : ");
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                printf("\n");
                break;
            case 4:
                display();
                printf("\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Sorry, you entered invalid choice.");
        }
    } while (1);
    return 0;
}