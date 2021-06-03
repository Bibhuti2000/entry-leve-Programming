#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int queue[SIZE];
int front;
int rear;
void initialize()
{
    front = -1;
    rear = -1;
}
void enq(int value)
{
    if(rear == SIZE - 1)
    {
      printf("queue is full\n");
    }else{
        if(front == -1)
           { front = 0; }

    }
    rear++;
    queue[rear]= value;
}
void main()
{
    initialize();
    enq(5);
    enq(6);
    printf("%d",queue[rear]);
    return 0;
}
