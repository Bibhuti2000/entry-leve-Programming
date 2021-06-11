// Priority Queue implementation in C

#include <stdio.h>
int size = 0;
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

// Function to heapify the tree
void heapify(int array[], int size, int i) {
  if(size == 1)
  { printf("there is only one element \n");
  }else {
      int largest  = i;
      int li = 2*i + 1;
      int ri = 2*i + 2;
      if(li < size && array[li] > array[largest])
      {   largest  = li; }
      if(ri < size && array[ri] > array[largest])
      { largest  = ri; }
      if( largest != i)
      {
          swap(&array[i] , &array[largest]);
          heapify(array ,  size , largest);
      }


  }
}

// Function to insert an element into the tree
void insert(int array[], int newNum) {
  if(size == 0)
  {  array[0] = newNum;
     size ++;
      }else{
          array[size] = newNum;
          size ++;
          for(int i = size/2 - 1 ;  i >= 0 ; i-- )
          {
              heapify(array , size , i);
          }
        }
}



// Function to delete an element from the tree
void deleteRoot(int array[], int num) {
  int i;
  for (i = 0; i < size; i++) {
    if (num == array[i])
      break;
  }

  swap(&array[i], &array[size - 1]);
  size -= 1;
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(array, size, i);
  }
}

// Print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i)
    printf("%d ", array[i]);
  printf("\n");
}

// Driver code
int main() {
  int array[10];

  insert(array, 3);
  insert(array, 4);
  insert(array, 9);
  insert(array, 5);
  insert(array, 2);

  printf("Max-Heap array: ");
  printArray(array, size);

  deleteRoot(array, 4);

  printf("After deleting an element: ");

  printArray(array, size);
}
