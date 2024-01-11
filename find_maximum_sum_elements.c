#include <stdio.h>

int main()
{
 int array[5] = {5,4,3,2,1};
 int array_size = sizeof(array);

//  for(int i=0; i< array_size; i++)
//  {

//  }
     for (int i = 0; i < 5; i++) {  // i is declared within the for loop's block
        printf("%d ", i);        // Accessing i inside the loop is valid
    }
    printf("%d ", i);  // This is also valid, as i is still accessible here
// for (i=0; i<array_size; i++)
// {
//  printf("%d \n", array[i]);
// }

}