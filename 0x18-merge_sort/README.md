# 0x18. Merge Sort

#### The function merge_sort implements the Merge Sort algorithm to sort an array of integers in ascending order. It follows the top-down approach of Merge Sort, where the array is recursively divided into smaller subarrays until the base case of a single element is reached.


#### Here is a step-by-step description of the merge_sort function:

* If the size of the array is less than 2 (i.e., the array is empty or contains only one element), the function returns as there is no need to sort such arrays.

* Otherwise, the function proceeds to divide the array into two halves: left and right. The left subarray is assigned as the original array itself, and the right subarray is set to the second half of the original array.

* The sizes of the left and right subarrays are calculated based on the mid-point of the original array.

* The merge_sort function is recursively called on both the left and right subarrays. This recursive call effectively divides the subarrays further until they reach the base case.

* Once the base case is reached (i.e., the subarrays have a size of 1), the merge function is called to merge the two sorted subarrays (left and right) into a single sorted array.

* The merge function works by comparing the elements of the left and right subarrays and merging them in sorted order into a temporary array (temp_array).

* After merging, the elements in the temp_array are copied back to the original array.

* Finally, the function prints the merged array after each merge operation using the print_array function.

The merge and print_array functions are also defined in the code to facilitate the merging and printing of arrays, respectively.

#### Overall, the merge_sort function efficiently sorts the input array using the Divide and Conquer approach of Merge Sort, with each recursive call dividing the array into smaller subarrays and merging them in sorted order until the entire array is sorted.






### Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
