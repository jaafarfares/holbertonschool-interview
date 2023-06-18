# 0x17. Find the Loop

#### This function, named find_listint_loop, is used to detect and return the starting node of a loop within a linked list. It takes a pointer to the head of the linked list as an input.

####  The function first initializes two pointers, slow and fast, both pointing to the head of the list. It then enters a loop where the slow pointer moves one step at a time, while the fast pointer moves two steps at a time. If there is a loop in the list, eventually the fast pointer will catch up to the slow pointer.

####  Once the two pointers meet (indicating the presence of a loop), the slow pointer is reset to the head of the list, while the fast pointer remains at the meeting point. The function then enters another loop where both pointers move one step at a time. The point at which they meet again will be the starting node of the loop. This is because when the slow pointer reaches the starting node of the loop, the fast pointer would have completed one or more loops around the list and will also be at the starting node.

#### If no loop is found, the function returns NULL.

###### Note that the function relies on the assumption that the linked list is singly linked and contains no cycles.


```

Jaafar@ubuntu:~/0x17-find_the_loop$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-find_loop.c -L. -lloop -o main
Jaafar@ubuntu:~/0x17-find_the_loop$ ./main
[0x13700f0] 1024
[0x13700d0] 402
[0x13700b0] 98
[0x1370090] 4
[0x1370070] 3
[0x1370050] 2
[0x1370030] 1
[0x1370010] 0
[0x1370560] 1024
[0x1370540] 402
[0x1370010] 98
[0x1370030] 7
[0x1370050] 6
[0x1370070] 5
[0x1370090] 4
[0x13700b0] 3
[0x13700d0] 2
[0x13700f0] 1
[0x1370110] 0
-> [0x1370030] 7
Loop starts at [0x1370030] 7
Jaafar@ubuntu:~/0x17-find_the_loop$

```

### Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
