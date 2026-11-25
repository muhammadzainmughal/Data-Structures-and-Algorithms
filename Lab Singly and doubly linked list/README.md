# Data Structures and Algorithms Lab
## Singly Linked List and Doubly Linked List in C++

### Introduction
In this lab, I learned about singly linked lists and doubly linked lists in C++. I practiced creating nodes dynamically, connecting them using pointers, and displaying their values through traversal.

### 1. Singly Linked List

A singly linked list is a data structure made up of nodes. Each node contains two parts: data and a pointer to the next node.

In this task, I created three nodes with the values 10, 20, and 30. I connected them using the `next` pointer and displayed all values using traversal.

**Node Structure:**
- `data`: Stores the value.
- `next`: Stores the address of the next node.

**Expected Output:**
```text
Linked List: 10 -> 20 -> 30 -> NULL
```

### 2. Doubly Linked List

A doubly linked list is a data structure in which each node contains three parts: data, a previous pointer, and a next pointer.

In this task, I created three nodes with the values 10, 20, and 30. I connected the nodes using both `prev` and `next` pointers. I also performed forward and backward traversal.

**Node Structure:**
- `data`: Stores the value.
- `prev`: Stores the address of the previous node.
- `next`: Stores the address of the next node.

**Expected Output:**
```text
Forward Traversal:
10 <-> 20 <-> 30 <-> NULL

Backward Traversal:
30 <-> 20 <-> 10 <-> NULL
```

### 3. Memory Management

I also learned about dynamic memory allocation and memory deallocation.

- `new` is used to create nodes dynamically.
- `delete` is used to release the memory when nodes are no longer needed.
- Before deleting a node in a loop, I save the address of the next node so I can safely continue deleting the remaining nodes.

### 4. Difference Between Singly and Doubly Linked Lists

| Feature | Singly Linked List | Doubly Linked List |
|---|---|---|
| Pointers | One (`next`) | Two (`prev`, `next`) |
| Traversal | Forward only | Forward and backward |
| Memory | Uses less memory | Uses more memory |
| Implementation | Simple | Requires more pointer connections |

### 5. What I Learned

After completing these tasks, I learned:

- How to define a node using a structure.
- How to create nodes dynamically using `new`.
- How to connect nodes using pointers.
- How to perform forward traversal.
- How to perform backward traversal in a doubly linked list.
- How to delete nodes and release allocated memory.
- The difference between singly and doubly linked lists.

### Conclusion

In this lab, I practiced implementing singly and doubly linked lists in C++. I understood how pointers connect nodes and how traversal works in both directions. I also learned why dynamic memory allocation and deallocation are important when working with linked lists.
