// Circular Queue implementation in C

#include <stdio.h>
#define SIZE 5
int cirQ[SIZE];
int front = -1;
int rear = -1;
void enq(int item)
{
    if(rear >= SIZE)
    {
        printf("queue is full\n)");
    }else{

    if(front <= rear)
    {   rear++;
        cirQ[rear] = item;

    }else{

    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        cirQ[rear] = item;
    } } }
}
void main()
{
    enq(5);
    enq(6);
    printf("%d \n",cirQ[0]);
    printf("%d",cirQ[1]);
    return 0;
}
