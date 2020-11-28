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


    //Sorting algorithms explained here

    //create an unsorted array.

    int us[5] = {3,7,5,9,4};

    // printing the unsorted array.

    printf("Unsorted Linear array --> ");

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ,", us[i]);
    }

        printf("\n");

    //Bubble sort

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 - i ; j++)
        {
            if(us[j] > us[j+1])
            {
                 int temp = us[j+1];
                 us[j+1] = us[j];
                 us[j] = temp;
                 
            }
        }
    }
       printf("Array sorted using bubble sort --->> ");

     for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ,", us[i]);
    }
    
    
    printf("\n");
    
    
    //Insertion sort
    
    int us2[5]={6,4,1,3,5};
    int key;
    
    // printing the unsorted array.

    printf("Unsorted Linear array --> ");

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ,", us2[i]);
    }

        printf("\n");
    
    
    
    
    for(int i = 1 ; i < 5 ; i++)
    {  key  = us2[i];
        for(int j = i-1 ;  j >= 0 ; j--)
        {
            if(key < us2[j])
            {
                int temp = key;
                 key = us2[j];
                 us2[j] = temp;
                 
            }
        }
    }
    
    printf("Array sorted using bubble sort --->> ");

     for(int i = 0 ; i < 5 ; i++)
    {
        printf("%d ,", us2[i]);
    }
    
    
    printf("\n");
    

    


   return 0 ;
}
