#include <stdio.h>
#include <stdlib.h>
struct node{
    int item;
    struct node *link;
};
typedef struct node node;
 node *top;
void intialize(){
top = NULL;
}
void push(int value)
{ node *temp;
  temp = malloc(sizeof(node));
  temp->item = value;
  temp->link = top;
  top = temp;
    }
void display()
{

        node *tra = top->link;

        printf("data  -> %d", tra->item);

}
void main()
{
    push(2);
    push(4);
    push(6);
    push(7);

    display();
}
