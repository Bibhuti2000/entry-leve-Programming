#include <stdio.h>
#define SIZE 5
struct node
{ int item;
  struct node *link;
};
struct linkedlist
{
    struct node *head;
    int count;

};
void init(struct linkedlist *p , int key)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->link = NULL;
    newnode->item = key;
    p->head = newnode;
    p->count = 1;

}
int main()
{   struct linkedlist *s = malloc(sizeof(*s)); /* allocate the structure */
    if (s == NULL) return 1; /* check if allocation succeeded */
    init(s , 2);
    printf("%d", s->head->item);
    return 0;

}
