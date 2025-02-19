# Overview

- [Overview](#overview)
- [Stack Operations](#stack-operations)
- [Push Operation (Insertion)](#push-operation-insertion)
  - [Steps for Push Operation](#steps-for-push-operation)
  - [Algorithm](#algorithm)
  - [Example](#example)
  - [Implementation](#implementation)
- [Pop Operation (Deletion)](#pop-operation-deletion)
  - [Steps for Pop Operation](#steps-for-pop-operation)
  - [Algorithm](#algorithm-1)
  - [Example](#example-1)
  - [Implementation](#implementation-1)
- [Peek Operation (Access Top Element)](#peek-operation-access-top-element)
  - [Steps for Peek Operation](#steps-for-peek-operation)
  - [Algorithm](#algorithm-2)
  - [Example](#example-2)
  - [Implementation](#implementation-2)
- [isEmpty Operation (Check if Stack is Empty)](#isempty-operation-check-if-stack-is-empty)
  - [Steps for isEmpty Operation](#steps-for-isempty-operation)
  - [Algorithm](#algorithm-3)
  - [Example](#example-3)
  - [Implementation](#implementation-3)
- [isFull Operation](#isfull-operation)
  - [Steps for isFull Operation](#steps-for-isfull-operation)
- [Additional Stack Operations](#additional-stack-operations)
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
- isFull (Check if the stack is full - in case of a fixed-size stack)

&nbsp;

&nbsp;

# Push Operation (Insertion)

The **Push** operation adds an element to the top of the stack.

&nbsp;

## Steps for Push Operation

1. Check if the stack is full (in case of a fixed-size stack).
2. If not full, increment the top pointer.
3. Insert the new element at the top position.

&nbsp;

&nbsp;

## Algorithm

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

The **Pop** operation removes the top element from the stack.

&nbsp;

## Steps for Pop Operation

1. Check if the stack is empty.
2. If not empty, remove the top element.
3. Decrement the top pointer.

&nbsp;

&nbsp;

## Algorithm

```mathematica
Pop(Stack):
  if (Top == -1) then
    Print "Stack Underflow" (Stack is empty)
  else
    Item = Stack[Top]
    Top = Top - 1
    Return Item
```

&nbsp;

&nbsp;

## Example

```mathematica
Before Pop:
Stack: [10, 20, 30]  (Top = 30)

Pop() → Removes 30 → Stack: [10, 20]  (Top = 20)
Pop() → Removes 20 → Stack: [10]  (Top = 10)
```

&nbsp;

&nbsp;

## Implementation

&nbsp;

&nbsp;

&nbsp;

# Peek Operation (Access Top Element)

The **Peek** operation returns the top element without removing it.

&nbsp;

## Steps for Peek Operation

1. Check if the stack is empty.
2. If not empty, return the top element.

&nbsp;

&nbsp;

## Algorithm

```mathematica
Peek(Stack):
    if (Top == -1) then
        Print "Stack is empty"
    else
        Return Stack[Top]
```

&nbsp;

&nbsp;

## Example

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

# isEmpty Operation (Check if Stack is Empty)

The **isEmpty** operation checks whether the stack is empty or not.

&nbsp;

## Steps for isEmpty Operation

1. If top == -1, return True (Stack is empty).
2. Otherwise, return False (Stack is not empty).

&nbsp;

&nbsp;

## Algorithm

```mathematica
isEmpty(Stack):
  if (Top == -1) then
    Return True
  else
    Return False
```

&nbsp;

&nbsp;

## Example

```mathematica
Stack: [10, 20, 30]  → isEmpty() = False
Stack: [] (Empty)    → isEmpty() = True
```

&nbsp;

&nbsp;

## Implementation

&nbsp;

&nbsp;

&nbsp;

# isFull Operation

The **isFull** Operation checks if the stack is full (for fixed-size stacks).

&nbsp;

&nbsp;

## Steps for isFull Operation

1. If (Top == MaxSize - 1), return True.
2. Else, return False.

&nbsp;

&nbsp;

&nbsp;

# Additional Stack Operations

Apart from the basic operations, stacks also support advanced operations:

| Operation | Description                                          |
| --------- | ---------------------------------------------------- |
| isFull()  | Checks if the stack is full (for fixed-size stacks). |
| Size()    | Returns the number of elements in the stack.         |
| Clear()   | Removes all elements from the stack.                 |

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
