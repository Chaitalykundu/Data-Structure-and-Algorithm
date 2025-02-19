# Overview

- [Overview](#overview)
- [Introduction](#introduction)
- [Real-Life Examples](#real-life-examples)
- [Characteristics of Stack](#characteristics-of-stack)
- [Stack Operations](#stack-operations)
- [Implementation of Stack](#implementation-of-stack)
- [Advantages of Stack](#advantages-of-stack)

&nbsp;

&nbsp;

&nbsp;

# Introduction

A stack is a **linear data structure** in DSA that follows the **LIFO** (Last In, First Out) principle meaning that the last element inserted into the stack is the first one to be removed.

It is commonly used in **memory management**, **expression evaluation**, and **backtracking algorithms**.

&nbsp;

&nbsp;

# Real-Life Examples

1. Stack of Plates in a Cafeteria
2. Piling Books on a Table
3. Parking Garage (Multi-Level Parking)
4. A shuttlecock box
5. Undo/Redo in Text Editors
6. Browser Back and Forward Buttons
7. Function Calls in Programming (Recursion Stack)
8. Reversing a Word (String Reversal)
9. Backtracking in Games

&nbsp;

&nbsp;

# Characteristics of Stack

- **LIFO (Last In, First Out)**: The last element inserted is removed first.
- **Restricted Access**: Elements can be added and removed only from the top.
- **Dynamic Size**: Can be implemented using an array (fixed size) or a linked list (dynamic size).
- **Efficient Operations**: All operations (**push, pop, peek**) take constant time O(1).
- **Memory Usage**:
    - In an **array-based stack**, memory is allocated beforehand.
    - In a **linked list-based stack**, memory is dynamically allocated.

&nbsp;

&nbsp;

# Stack Operations

- **Push(X)** → Adds an element X to the top of the stack.
- **Pop()** → Removes and returns the top element.
- **Peek (or Top)** → Returns the top element without removing it.
- **isEmpty()** → Checks if the stack is empty.
- **isFull()** → Checks if the stack is full (only applicable in array-based implementation).

&nbsp;

&nbsp;

# Implementation of Stack

A stack can be implemented in two ways:

1. Array Representation (Fixed Size)
2. Linked List Representation (Dynamic Size)
3. Using Stack Library/Framework Support (Built-in Stack)

&nbsp;

&nbsp;

# Advantages of Stack

1. Easy to Implement and Use
2. Efficient Memory Management
3. Fast Execution (O(1) Time Complexity)
4. Helps in Function Call Management (Recursion & Execution Stack)
5. Used in Backtracking Algorithms (Maze, Game AI, DFS, etc.)
6. Undo & Redo Operations (Text Editors, Photoshop, MS Word)
7. Expression Evaluation & Syntax Parsing (Compilers, Calculators)
8. Helps in Memory Management (Stack Memory in OS)
9. Used in Browser History (Back & Forward Navigation)
10. Reversing Data (String Reversal, Palindrome Checking, etc.)

&nbsp;

| Advantage                   | Explanation                                     |
| --------------------------- | ----------------------------------------------- |
| Simple Implementation       | Easy to implement using arrays or linked lists  |
| Fast Execution              | Push, Pop, and Peek are O(1)                    |
| Automatic Memory Management | Functions and local variables use stack memory  |
| Supports Recursion          | Used for function call stacks                   |
| Undo/Redo Operations        | Used in text editors, Photoshop, etc.           |
| Expression Evaluation       | Used in calculators, compilers                  |
| Backtracking & AI           | Used in games, DFS, and maze solving            |
| Efficient Memory Usage      | Stack memory is faster than heap memory         |
| Used in Web Browsers        | Maintains back & forward history                |
| Reversing Data              | Used in string reversal and palindrome checking |
|                             |                                                 |

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;
