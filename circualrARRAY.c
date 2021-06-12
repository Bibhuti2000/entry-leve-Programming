#include <stdio.h>
#define SIZE 5
int circularArray[SIZE];
void insertion(int ar[] , int index , int item)
{   if(index < 0)
    {index =  SIZE + index;}
    ar[index] = item;
}
void main()
{
    insertion(circularArray , -1 , 6);
    insertion(circularArray , -2 , 7);
    printf("%d \n",circularArray[4]);
    printf("%d",circularArray[3]);
    return 0;
}
