#include <stdio.h>
#include <stdlib.h>
 void enq(int x);
 void deq();
 void display();
 void peek();

 int queue[10];
 int front =-1;
 int rear =-1;
 int main()
 {
     enq(2);
     enq(4);
     enq(5);
     enq(6);
     peak();
     return 0;
 }
void enq(int x)
{   if(rear == -1)
      {
          front = front+1;
      }
    rear = rear+1;
    queue[rear] = x;
}
void peak()
{
    printf("%d", queue[front]);
    printf(" \n queue traversal \n");
    for(int i = front; i <= rear; i++)
    {
        printf("%d ,",queue[i]);
    }
}
