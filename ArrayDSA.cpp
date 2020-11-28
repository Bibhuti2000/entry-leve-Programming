#include<stdio.h>
#include<string.h>

int main()
{ int l[100], position, n, value;
   n = 5;
   position = 2;
   value = 90;

    printf("Insertion of 90 into 2nd place \n");


   // display the array


   for (int c = 0 ; c < n  ; c++)
   {l[c] = c+1;}

    //insertion of an element in array.

    for(int c = 0 ; c < n  ; c++)
    {printf("%d ,",l[c]);}
    printf("\n");
    for(int i = n-1 ; i >= position-1 ; i-- )
    {  l[i+1] = l[i]; }
       l[position - 1] = value;
       n++;
     for(int c = 0 ; c < n  ; c++)
    {printf("%d ,",l[c]);}
     printf("\n");
     printf("\n");

     printf("Deletion of element 90 \n");


    //deleting an element from array.


     for(int i = position-1 ; i < n ; i++)
    {
        l[i] = l[i+1];
    }
    n--;
    for(int c = 0 ; c < n  ; c++)
    {printf("%d ,",l[c]);}
     printf("\n\n");


     //the array is already sorted.

     //reference
      /* int l[100], position, n, value;
   n = 5;
   position = 2;
   value = 90;   */

          printf("Binary search result for 4 \n");

          int lb , ub , item , mid ;
          lb = 0 ;  ub = n-1; item = 4;
          while(1)
          {
              mid  =  (int) (lb+ub)/2 ;
              if (item < l[mid] )
              {
                  ub  =  mid - 1;
              }
              if (item > l[mid])
               {  lb = mid + 1 ; }

              if(item  == l[mid])
              {
                  printf("The position of 4 in array l is  --> %d \n\n", mid+1);
                  break ;
              }

            }


   return 0 ;
}
