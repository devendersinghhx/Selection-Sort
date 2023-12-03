#include <stdio.h>

int main() {
   // Declare variables
   int n;

   // Prompt user to enter the number of elements
   printf("Enter the number of elements: ");
   scanf("%d", &n);

   // Declare an array of size 'n' to store elements
   int arr[n];

   // Prompt user to enter the elements
   printf("Enter the elements:\n");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Implementation of selection sort algorithm
   for (int i = 0; i < n - 1; i++) {
      // Assume the current index is the minimum
      int minIndex = i;

      // Find the index of the minimum element in the unsorted part
      for (int j = i + 1; j < n; j++) {
         if (arr[j] < arr[minIndex]) {
            minIndex = j;
         }
      }

      // Swap the found minimum element with the current element
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
   }

   // Display the sorted array
   printf("Sorted array:\n");
   for (int i = 0; i < n; i++) {
      printf("%d\t", arr[i]);
   }

   return 0;  // indicating successful execution
}

// Comment by Devender
