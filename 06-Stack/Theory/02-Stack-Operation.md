# Overview

- [Overview](#overview)
- [Stack Operations](#stack-operations)
- [Push Operation (Insertion)](#push-operation-insertion)
  - [Steps for Push Operation](#steps-for-push-operation)
  - [Algorithm for Push Operation](#algorithm-for-push-operation)
  - [Example](#example)
  - [Implementation](#implementation)
- [Pop Operation (Deletion)](#pop-operation-deletion)
  - [Steps for Pop Operation](#steps-for-pop-operation)
  - [Example](#example-1)
  - [Implementation](#implementation-1)
- [Peek Operation (Access Top Element)](#peek-operation-access-top-element)
  - [Steps for Peek Operation](#steps-for-peek-operation)
  - [Algorithm for Peek Operation](#algorithm-for-peek-operation)
  - [Example (Peek from Stack)](#example-peek-from-stack)
  - [Implementation](#implementation-2)
- [Time Complexity of Stack Operations](#time-complexity-of-stack-operations)

&nbsp;

&nbsp;

&nbsp;

# Stack Operations

Stack supports four primary operations:

- Push (Insertion)
- Pop (Deletion)
- Peek (Top Element Access)
- isEmpty (Check if Stack is Empty)

&nbsp;

&nbsp;

# Push Operation (Insertion)

The Push operation adds an element to the top of the stack.

&nbsp;

## Steps for Push Operation

1. Check if the stack is full (in case of a fixed-size stack).
2. If not full, increment the top pointer.
3. Insert the new element at the top position.

&nbsp;

&nbsp;

## Algorithm for Push Operation

```mathematica
Push(Stack, Item):
    if (Top == MaxSize - 1) then
        Print "Stack Overflow" (Stack is full)
    else
        Top = Top + 1
        Stack[Top] = Item
```

&nbsp;

&nbsp;

## Example

```mathematica
Before Push:
Stack: [ ] (Empty)

Push(10) → Stack: [10]
Push(20) → Stack: [10, 20]
Push(30) → Stack: [10, 20, 30] (Top = 30)
```

&nbsp;

&nbsp;

## Implementation

&nbsp;

&nbsp;

&nbsp;

# Pop Operation (Deletion)

The Pop operation removes the top element from the stack.

&nbsp;

## Steps for Pop Operation

1. Check if the stack is empty.
2. If not empty, remove the top element.
3. Decrement the top pointer.

&nbsp;

&nbsp;

## Example

&nbsp;

&nbsp;

## Implementation

&nbsp;

&nbsp;

&nbsp;

# Peek Operation (Access Top Element)

The Peek operation returns the top element without removing it.

&nbsp;

## Steps for Peek Operation

1. Check if the stack is empty.
2. If not empty, return the top element.

&nbsp;

&nbsp;

## Algorithm for Peek Operation

```mathematica
Peek(Stack):
    if (Top == -1) then
        Print "Stack is empty"
    else
        Return Stack[Top]
```

&nbsp;

&nbsp;

## Example (Peek from Stack)

```mathematica
Stack: [10, 20, 30] (Top = 30)
Peek() → Returns 30
```

&nbsp;

&nbsp;

## Implementation

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

# Time Complexity of Stack Operations

| Operation | Time Complexity |
| --------- | --------------- |
| Push()    | O(1)            |
| Pop()     | O(1)            |
| Peek()    | O(1)            |
| isEmpty() | O(1)            |
|           |                 |

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;

&nbsp;
