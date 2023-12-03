# Selection-Sort

Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. The algorithm maintains two subarrays in the given array:

  1. Sorted Subarray: Elements that are sorted in ascending order are placed at the beginning of the array.
  2. Unsorted Subarray: Elements that are yet to be sorted are placed at the end of the array.

The process continues until the entire array is sorted. The algorithm does not use any additional data structures and operates in-place, making it space-efficient.

Here's a brief step-by-step explanation:

  1. Initialization: Start with the entire array as an unsorted subarray.

  2. Find the Minimum: Iterate through the unsorted subarray to find the minimum element.

  3. Swap: Swap the minimum element with the first element of the unsorted subarray. Now, the first element of the unsorted subarray becomes a part of the sorted subarray.

  4. Move the Boundary: Move the boundary between the sorted and unsorted subarrays one element to the right.

  5. Repeat: Repeat steps 2-4 until the entire array is sorted.

The time complexity of the Selection Sort algorithm is O(n^2), where 'n' is the number of elements in the array. It is not the most efficient sorting algorithm for large datasets, but it is simple to understand and implement.
