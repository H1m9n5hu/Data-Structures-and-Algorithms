// Implementation of Queue with Linked List or Dynamic Memory Allocation...
#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *front = 0, *rear = 0, *temp;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = 0;
    if(front == 0 && rear == 0)
    {
        front = rear = newnode;
        newnode->data = x;
    }
    else
    {
        rear->next = newnode;
        newnode->data = x;
        rear = newnode;
    }
}

void dequeue()
{
    if(front == 0 && rear == 0)
        printf("Underflow Condition\n");
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    if(front == 0 && rear == 0)
        printf("Queue is Empty\n");
    else
    {
        temp = front;
        printf("Queue is ");
        while(temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek()
{
    if(front == 0 && rear == 0)
        printf("Queue is Empty\n");
    else
        printf("Front of Queue is %d\n", front->data);
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