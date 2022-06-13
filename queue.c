#include <stdio.h>
#include <stdlib.h>


#define size 100
void enqueue();                             
void dequeue();          
void display();

int int_arr[size];
int rare =-1;
int front=-1;

void main()

{
    int ch;
    while(1)
    {
        // FS21IF035;
        printf("1)Enqueue operation\n");
        printf("2)Dequeue operation\n");
        printf("3)Display\n");
        printf("4)Exit\n");
        printf("Enter your choice of operation:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Incorrect choice\n");
            
        }
    }
}
void enqueue()
{
    int insert_item;
    if(rare == size - 1 )
    printf(" queue is overflow......\n");
    else
    {
        if(front == -1)
        
        front=0;
        printf("Element to be insert in queue\n:");
        scanf("%d",&insert_item);
        rare = rare + 1; 
        int_arr[rare]=insert_item;
    }
}
void dequeue()
{
    if(front == - 1 || front > rare)
    {
        printf(" queue is Underflow\n");
        return;
    }
    else
    {
        printf("Element deleted from th queue:%d\n",int_arr[front]);
        front = front + 1;
    }
}
void display()
{
    if(front == - 1 )
    printf("Empty queue\n");
    else
    {
        printf("queue:\n");
        for(int i = front;i <= rare;i++)
        printf("%d\t",int_arr[i]);
        printf("\n");
    }
}