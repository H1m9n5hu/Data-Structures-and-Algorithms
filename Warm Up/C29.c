// Implementation of Queue with Array or Static Memory Allocation...
#include<stdlib.h>
#include<stdio.h>
#define N 7

int queue[N];
int front = -1, rear = -1;

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if(rear == N-1)
        printf("Overflow Condition\n");
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
        printf("Underflow Condition\n");
    else if(front == rear+1)
        front = rear = -1;
    else
        front++;
}

void display()
{
    if(front == -1 && rear == -1)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue is ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void peek()
{
    if(front == -1 && rear == -1)
        printf("Queue is Empty\n");
    else
        printf("Front of Queue is %d\n", queue[front]);
}

int main()
{
    int choice, num;
    while(1)
    {
        printf("1.enqueue(n)\n2.dequeue()\n3.display()\n4.peek();\n5.Exit\nEnter your Choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter a Number : ");
                scanf("%d", &num);
                enqueue(num);
                break;
            case 2:
                dequeue();
                break;
            case 3: 
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
}