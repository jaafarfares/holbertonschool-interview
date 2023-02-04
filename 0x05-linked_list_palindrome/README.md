# exist and not empty



### Description

This function is designed to check if a linked list is a palindrome. The function takes a double pointer to the head of the linked list as an argument. It initializes a variable "current" to the head of the linked list and another variable "len" to 0. It also declares an array "arr" of size 1024 to store the elements of the linked list. The function then iterates through the linked list, storing each element in the "arr" array and incrementing the "len" variable with each iteration. After all elements have been stored in the array, the function uses a for loop to compare elements at the start and end of the array. If the elements are equal, the function continues to the next pair of elements. If at any point, two elements are not equal, the function returns 0, indicating that the linked list is not a palindrome. If all elements are equal, the function returns 1, indicating that the linked list is a palindrome.



### Usage

```
Jaafar@ubuntu:0x03$ gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
carrie@ubuntu:0x03$ ./palindrome
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome
Jaafar@ubuntu:0x03$


```



## Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)


