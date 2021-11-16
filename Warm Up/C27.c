// Implement Stack with Array or Static Memory Allocation...
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int stack[7], top = -1;

void push()
{
    int x;
    printf("Enter the Data : ");
    scanf("%d", &x);
    if(top == 6)
        printf("Overflow Condition\n");
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
        printf("Underflow Condition\n");
    else
    {
        stack[top] = 0;
        top--;
    }
}

void peek()
{
    if(top == -1)
        printf("Stack is Empty.");
    else
        printf("Top Element is %d.", stack[top]);
}

void display()
{
    if(top == -1)
        printf("Stack is Empty.");
    else
        for(int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
}

int main()
{    
    int choice;
    do
    {
        printf("1.push()\n2.pop()\n3.peek()\n4.display()\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
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