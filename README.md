# LINKED-LIST-IMPLEMENTATION

COMPANY: CODTECH IT SOLUTIONS

NAME: LEMINA BHAGAT

INTERN ID: CT04WE100

DOMAIN: C PROGRAMMING

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH

#DESCRIPTION:This C program is a complete and interactive implementation of a singly linked list—a fundamental data structure in computer science. A linked list is a collection of nodes, where each node contains two parts: a data field to store the value and a pointer to the next node in the sequence. Unlike arrays, linked lists do not require continuous memory blocks and can grow or shrink dynamically. This makes them a powerful choice when dealing with dynamic data where frequent insertion and deletion operations are required. The program provides users with a menu-driven interface that allows them to insert values at the end of the list, delete specific values, and traverse or display the entire list at any time. It uses standard C features such as structures, pointers, dynamic memory allocation via malloc, and basic control structures like loops and switch statements.

The program begins by defining the structure of a node. Each node stores an integer data field and a pointer to the next node. The core functionality of the program is built around three main operations: insertion, deletion, and traversal. The insert() function dynamically allocates memory for a new node and sets its value. If the list is empty (i.e., the head is NULL), the new node becomes the first element. If not, the function traverses the list until it reaches the last node and attaches the new node at the end. This method ensures that the list maintains its sequence as elements are added. During each insertion, the program also prints a confirmation message to let the user know the value has been successfully inserted.

The delete() function handles the removal of nodes based on user input. It first checks if the list is empty. If not, it looks for the node that contains the value to be deleted. If the node is found at the head, the head is updated to the next node, and the original head node is freed. If the node is found elsewhere, the previous node's next pointer is updated to skip the deleted node, and memory is released using free(). If the value is not present in the list, the user is informed that the value was not found. This precise handling of pointers ensures that memory is properly managed, and no dangling or broken links remain in the list.

The traverse() function is used to display the entire linked list from the head to the last node. It prints each value followed by an arrow (->) to visually represent the sequence, ending with NULL to indicate the end of the list. If the list is empty, the user is informed with a message.

The main() function ties everything together using a loop that keeps running until the user chooses to exit. It presents a menu with four choices: insert, delete, display, and exit. Depending on the user’s input, the appropriate function is called. This makes the program user-friendly and interactive, allowing real-time operations on the linked list.

Overall, this program provides a solid practical understanding of how linked lists work internally. It teaches key programming concepts like dynamic memory management, pointer manipulation, and user input handling. It’s a great example of how complex data structures can be made simple and interactive through clean code and thoughtful design.

#OUTPUT:

![Image](https://github.com/user-attachments/assets/d3cf5541-b21b-4157-8e19-7e47dfdd9a14)

